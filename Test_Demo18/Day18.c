/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-28-9:07
*/

#include "stdio.h"
/*
 * 给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
 */
/*
int main() {
    long a, b, c, d, e, f;
    printf("请输入5位数:");
    scanf("%ld",&f);
    a = f / 10000;
    b = f % 10000 / 1000;
    c = f % 1000 / 100;
    d = f % 100 / 10;
    e = f % 10;
    if (a != 0) {
        printf("为5位数，逆序为：%d %d %d %d %d\n", e, d, c, b, a);
    } else if (b != 0) {
        printf("为4位数，逆序为：%d %d %d %d\n", e, d, c, b);
    } else if (c != 0) {
        printf("为3位数，逆序为：%d %d %d\n", e, d, c);
    } else if (d != 0) {
        printf("为2位数，逆序为：%d %d\n", e, d);
    } else if (e != 0) {
        printf("为1位数，逆序为：%d\n", e);
    }
}
*/

/*
 * 数的阶乘
 */
int main() {
    int i;
    long factorial = 1;
    int n;
    printf("请输入一个数:");
    scanf("%d", &n);
    if (n < 0)
        printf("error,负数没有阶乘");
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;// factorial = factorial*i;
        }
        printf("%d!(的阶乘) = %llu", n, factorial);
    }
}