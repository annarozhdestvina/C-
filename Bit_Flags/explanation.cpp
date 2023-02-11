#include <iostream>


bool is_set(int number, int index) {
//   0 & 0 -> 0
//   1 & 0 -> 0
//   0 & 1 -> 0
//   1 & 1 -> 1

//   01 & 01 -> 01
//   10 & 11 -> 10

// 76543210
// 10001000
// 00001000
// 00001000
    const int digit = 1 << index;
    // if (number & digit != 0)
        // return true;
    
    // return false;
    
    // return number & digit != 0;
    return number & digit;
    //   - 1010
    // 5 - 0101
//    -5 - 1011
    //    10000
    // 0   0000
//    -0   1111
//    -0  10000
    // 0 - 000
}

void set_bit(int* number, int index) {
    // 0000 0000
    // 0 | 0 -> 0
    // 1 | 0 -> 1
    // 0 | 1 -> 1
    // 1 | 1 -> 1
    // 10 | 10 -> 10
    // 10 | 01 -> 11

    // 76543210
    // 11000000
    // 00001000
    // 11001000
    const int digit = (1 << index);
    // (*number) = (*number) | digit;
    (*number) |= digit;


    //a = a + 19;   
    //a += 19;
}
void reset_bit(int* number, int index) {
    // ~1 -> 0
    // ~0 -> 1
    // ~01 -> 10
    
    // 11001000
    // 11000000

    // 11001000
    // 00001000
    // 11001000

    // 11001000
    // 11110111
    // 11000000

    // 00001000
    // 11110111

    //&
    const int digit = 1 << index;
    const int inverted_digit = ~digit;
    *number = *number & inverted_digit; 
}
void print_binary(int number) {
    std::cout << std::noboolalpha;
    for (int index = 31; index >= 0; --index) {
        if (index == 7 || index == 15 || index == 23)
            std::cout << ' ';
        std::cout << is_set(number, index);
    }
    std::cout << '\n';
}

void place_bit(int* number, int index, bool bit) {
    if (bit) {
        set_bit(number, index);
    }
    else {
        reset_bit(number, index);
    }
}

int main() {
    int a = 0b01001000;
    std::cout << "a = " << a << '\n';
    for (int index = 0; index < 8; ++index)
        std::cout << std::boolalpha << is_set(a, index) << '\n';

    print_binary(a);
    set_bit(&a, 3);
    print_binary(a);
    set_bit(&a, 2);
    set_bit(&a, 12);
    set_bit(&a, 10);
    set_bit(&a, 21);
    set_bit(&a, 22);
    print_binary(a);
    reset_bit(&a, 22);
    reset_bit(&a, 3);
    print_binary(a);
    std::cout << "a = " << a << '\n';

    place_bit(&a, 0, true);
    print_binary(a);
    place_bit(&a, 2, false);
    print_binary(a);
    
}