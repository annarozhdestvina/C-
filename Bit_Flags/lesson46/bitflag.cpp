#include <iostream>

int main() {
{
    const unsigned char isHungry = 0x01; //шестнадцатеричный литерал для 0000 0001
    const unsigned char isSad = 0x02; //шестнадцатеричный литерал для 0000 0001
    const unsigned char isMad = 0x04; //шестнадцатеричный литерал для 0000 0001
    const unsigned char isLaughing = 0x08; //шестнадцатеричный литерал для 0000 0001

    unsigned char me =0;
    me |= isHungry | isLaughing;
    me &= ~isLaughing;

    std::cout << "I am hungry? " << static_cast<bool>(me & isHungry) << '\n';
    std::cout << "I am laughing " << static_cast<bool>(me & isLaughing) << '\n';

}
    return 0;

}