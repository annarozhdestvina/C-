#include <iostream>

struct ABase {
    ABase() {
        std::cout << "ABase\n";
    }
    ~ABase() {
        std::cout << "~ABase\n";
    }
};

struct BBase {
    BBase() {
        std::cout << "BBase\n";
    }
    ~BBase() {
        std::cout << "~BBase\n";
    }
};

struct AField {
    AField() {
        std::cout << "AField\n";
    }
    ~AField() {
        std::cout << "~AField\n";
    }
};

struct BField {
    BField() {
        std::cout << "BField\n";
    }
    ~BField() {
        std::cout << "~BField\n";
    }
};

struct Current : ABase, BBase {     // наследуется от двух базовых классов
    Current() {
        std::cout << "Current\n";
    }
    ~Current() {
        std::cout << "~Current\n";
    }

    BField b;  // и у него ест два эти поля
    AField a;
};
// В каком порядке когда мы ввызовтим check call у нас будет создан объект на стеке 
// cuurent какой будет порядок вызовов конструкторов у данного объекта?


// сначала инициализируются поля класса вызовется ABase BBase BField AField Current
// ~Current  ~AField  ~BField  ~BBase  ~ABase

//конструктор базового класса не может инициалтщироваться позже поэтому проинициализируем поля
//  ABase BBase будет проиницилизировано до контрутров полей


//  как наследование устроено в плане расположения этих объектов?
// в памяти будет раньше родительский класс
void check_call_order() {
    Current current;
}

// у еого бывовется раньше конструктор у ABase или ВBase
// раньше у ВBase

int main() {
    check_call_order();
}