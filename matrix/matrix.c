#include <stdio.h>
#include <stdlib.h>

int main() {
    int m[4][4];
    int k=0;
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            m[i][j] = i+j+1+k;
            printf("%d\t", m[i][j]);
        }
        k+=3;
        printf("\n");
    }

    return 0;
}