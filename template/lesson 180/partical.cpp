#include <iostream>
#include <cstring>
 
// Общий шаблон класса Repository для работы с не указателями
template <class T>
class Repository {
private:
	T m_value;
public:
	Repository(T value) {
		m_value = value;
	}
 
	~Repository() {}
 
	void print() {
		std::cout << m_value << '\n';
	}
};
 
// Частичная специализация шаблона класса Repository для работы с указателями
template <class T>
class Repository<T*> {
private:
	T* m_value;
public:
	Repository(T* value) {
		m_value = new T(*value);
	}
 
	~Repository() {
		delete m_value;
	}
 
	void print() {
		std::cout << *m_value << '\n';
	}
};
 
// Полная специализация шаблона конструктора класса Repository для работы с типом char*
template <>
Repository<char*>::Repository(char* value) {
	// Определяем длину value
	int length = 0;
	while (value[length] != '\0')
		++length;
	++length; // +1, учитывая нуль-терминатор
 
	// Выделяем память для хранения значения value
	m_value = new char[length];
 
	// Копируем фактическое значение value в m_value
	for (int count = 0; count < length; ++count)
		m_value[count] = value[count];
}
 
// Полная специализация шаблона деструктора класса Repository для работы с типом char*
template<>
Repository<char*>::~Repository() {
	delete[] m_value;
}
 
// Полная специализация шаблона метода print() для работы с типом char*.
// Без этого вывод Repository<char*> привел бы к вызову Repository<T*>::print(), который выводит только одно значение (в случае со строкой C-style - только первый символ)
template<>
void Repository<char*>::print() {
	std::cout << m_value;
}
 
int main() {
	// Объявляем целочисленный объект для проверки работы общего шаблона класса
	Repository<int> myint(6);
	myint.print();
 
	// Объявляем объект с типом указатель для проверки работы частичной специализации шаблона
	int x = 8;
	Repository<int*> myintptr(&x);
 
	// Если бы в myintptr выполнилось поверхностное копирование (присваивание указателя),
	// то изменение значения x изменило бы и значение myintptr
	x = 10;
	myintptr.print();
 
	// Динамически выделяем временную строку
	char *name = new char[40]{ "Anton" }; // необходим C++14
 
	// Если ваш компилятор не поддерживает C++14, то закомментируйте строку выше и раскомментируйте строки, приведенные ниже
//	char *name = new char[40];
//	strcpy(name, "Anton");
 
	// Сохраняем имя
	Repository<char*> myname(name);
 
	// Удаляем временную строку
	delete[] name;
 
	// Выводим имя
	myname.print();
}