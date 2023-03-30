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

enum Animals
{
    ANIMAL_PIG = -4,
    ANIMAL_LION, // присваивается -3
    ANIMAL_CAT, // присваивается -2
    ANIMAL_HORSE = 6,
    ANIMAL_ZEBRA = 6, // имеет то же значение, что и ANIMAL_HORSE
    ANIMAL_COW // присваивается 7
};

void printColor(Colors color) {
    if (color == YELLOW)
        std::cout << "Yellow\n";
    else if (color == BLACK) 
        std::cout << "black\n";
    else if(color == PINK) 
        std::cout << "pink\n";
    else 
        std::cout << "WTF\n";
}

int main() {
    Colors paint(BLACK);
    std::cout << paint << '\n';

    Feelings Misha(Black);
    std::cout << Misha << '\n';

    int mypet = ANIMAL_PIG;
    std::cout << "pig " << mypet << '\n';
    std::cout << "cat " << ANIMAL_CAT << '\n';

    printColor(paint);
}