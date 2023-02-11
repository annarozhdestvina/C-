#include <iostream>

const unsigned char option1 = 0x01;   //шестнадцатеричный литерал для 0000 0001
const unsigned char option2 = 0x02;
const unsigned char option3 = 0x04;
const unsigned char option4 = 0x08;
const unsigned char option5 = 0x10;
const unsigned char option6 = 0x20;   //шестнадцатеричный литерал для 0010 0000

unsigned char myflags = 0; // все флаги отключены до старта

int main() {
    if (myflags & option4) {
    int i = 5;
    std::cout << "i= " << i << std::endl; 
    }   

    myflags |= option4; //включаем optoin4
    myflags |= (option4 | option5); // two flags is on

    myflags &= ~option4; // выключаем
    myflags 




}
