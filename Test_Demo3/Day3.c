/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-19-20:15
*/

#include <stdio.h>

//99乘法表

int main() {
    int i, j;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}


/*
//百钱买百鸡
int main() {
    int i, j, k;
    for (i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                if (5 * i + 3 * j + k / 3 == 100 && i + j + k == 100 && k % 3 == 0)
                    printf("%d,%d,%d",i,j,k);
            }
        }
    }
}
*/