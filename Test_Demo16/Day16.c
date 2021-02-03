/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-19-17:56
*/

#include "stdio.h"
unsigned fun(unsigned num) {
    unsigned k = 1;
    do {
        k *= num % 10;
        num /= 10;
    } while (num);
    return k;
}
int main() {
    unsigned n = 26;
    printf("%d\n", fun(n));
}