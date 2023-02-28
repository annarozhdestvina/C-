#include <stdio.h>
#include <stdlib.h>

void inputArray(int m[4][4]) {
    int k=0;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            m[i][j] = i+j+1+k;
            printf("%d\t", m[i][j]);
        }
        k+=3;
        printf("\n");
    }
    printf("------------------------------\n");
}

void print(int zero[4][4]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            printf("%d\t", zero[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------\n");
}

void inputRandom (int n[4][4]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            n[i][j] = 1+rand()%10;
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------\n");
}

void Sum(int n[4][4], int m[4][4], int sum[4][4]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            sum[i][j] = n[i][j]+m[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------\n");
}
void Div(int n[4][4], int m[4][4], int div[4][4]) {
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            div[i][j] = n[i][j]-m[i][j];
            printf("%d\t", div[i][j]);
        }
        printf("\n");
    }
    printf("------------------------------\n");
}

int main() {
    int m[4][4];
    int n[4][4];
    
    inputArray(m);

    inputRandom(n);

    int sum[4][4];
    Sum(n,m, sum);

    int div[4][4];
    Div(n, m, sum);

    int zero[4][4]={0};
    print(zero);




    return 0;
}