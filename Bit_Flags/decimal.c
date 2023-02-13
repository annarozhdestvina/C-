#include <stdio.h>

/*
typedef struct {
  int bits[4];
} s21_decimal;

#define DEC_ZERO   \
  (s21_decimal) {  \
    { 0, 0, 0, 0 } \
  }

int s21_add (s21_decimal value1, s21_decimal value2, s21_decimal *result) {
    int res =0;
    int carry = 0;
    res = value1.bits[0] + value2.bits[0];
    carry = (value1.bits[0] & value2.bits[0]) << 1;
    while (carry) {
        int tmp = res;
        res = res^carry;
        carry = (tmp & carry) << 1;
        }

    return res;
}
*/

int s21_add (int value1, int value2) {
    int res =0;
    int carry = 0;
    res = value1 ^ value2;
    carry = (value1 & value2) << 1;
    while (carry) {
        int tmp = res;
        res = res^carry;
        carry = (tmp & carry) << 1;
        }

    return res;
}


int main() {
    const int unsigned a = 0b00000000000000000000100101111001;
    const int unsigned b = 0b00000000000000000000000101111001;
    int c = -55;
    int d = -66;
    printf("a = %d \n", a);
    printf("b = %d \n", b);

    printf("res = %d \n", s21_add(a, b));

    printf("res = %d \n", s21_add(c, d));


}