#include<iostream>

void calculate(int a, int b, char c) {
    switch(c) {
        case '+': std::cout <<"a+b= " <<a+b<<'\n';
        break;
        case '-': std::cout <<"a-b= " <<a-b<<'\n';
        break;
        case '/': std::cout <<"a/b= " <<a/b<<'\n';
        break;
        case '*': std::cout <<"a*b= " <<a*b<<'\n';
        break;
        case '%': std::cout <<"a%b= " <<a%b<<'\n';
        break;
        default: break;
    }
}

bool isdigit(char p) {
    switch (p) {
        case '0': std::cout << "p is 0\n";
        case '1': std::cout << "p is 1\n";
        case '2': std::cout << "p is 2\n";
        case '3': std::cout << "p is 3\n";
            return true; //если p является числом из ASCII-таблицы, то выполнится первый стейтмент после кейса — return true
            std::cout << "true";
        default:
            return false;
            std::cout << "false";
    }
}

int main() {
    char p = '2';
    isdigit(p);

    switch (2)
{
   case 1: // Не совпадает!
       std::cout << 1 << '\n'; // пропускается
   case 2: // Совпало!
       std::cout << 2 << '\n'; // выполнение кода начинается здесь
       break;
   case 3:
       std::cout << 3 << '\n'; // это также выполнится
       break;
   case 4:
       std::cout << 4 << '\n'; // и это
   default:
       std::cout << 5 << '\n'; // и это
}

    int q = 8;
    int w = 5;
    char sign = '%'; 
    calculate(q, w, sign);
    return 0;
}