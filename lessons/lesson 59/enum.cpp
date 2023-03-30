#include <iostream>

enum Colors
{
	YELLOW, // присваивается 0
	BLACK, // BLACK находится в глобальном пространстве имен
	PINK    // присваивается 2
};
 
enum Feelings
{
	SAD,
	ANGRY,
	Black // получим ошибку, так как BLACK уже используется в enum Colors
};

int main() {
    Colors paint(BLACK);
    std::cout << paint << '\n';

    Feelings Misha(Black);
    std::cout << Misha << '\n';
}