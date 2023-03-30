#include <iostream>
 
int main()
{
    enum class Fruits // добавление "class" к enum определяет перечисление с ограниченной областью видимости, вместо стандартного "глобального" перечисления 
    {
        LEMON, // LEMON находится внутри той же области видимости, что и Fruits
        KIWI
    };
 
    enum class Colors
    {
        PINK, // PINK находится внутри той же области видимости, что и Colors
        GRAY
    };
 
    Fruits fruit = Fruits::LEMON; // примечание: LEMON напрямую не доступен, мы должны использовать Fruits::LEMON
    Colors color = Colors::PINK; // примечание: PINK напрямую не доступен, мы должны использовать Colors::PINK
	
    if (fruit == color) // ошибка компиляции, поскольку компилятор не знает, как сравнивать разные типы: Fruits и Colors
        std::cout << "fruit and color are equal\n";
    else
        std::cout << "fruit and color are not equal\n";
 
    return 0;
}