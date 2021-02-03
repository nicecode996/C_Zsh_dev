/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-09-8:45
*/
#include "stdio.h"
#define N 10

/*
 * 统计一维数组中下标及数组元素均为奇数的数组元素之和，数组元素个数为10，从键盘输入
 */
/*
int main() {
    int a[N];
    int i, sum = 0;
    printf("input array:\n");
    for (int i = 0; i < N; i++)//循环输入数组内的值
        scanf("%d", &a[i]);
        for (int i = 1; i < N; i += 2)//循环求奇数和
            if (a[i] % 2)
                sum += a[i];
    printf("%d\n", sum);
}
*/

/*
 * 定义一个由10个元素构成的整形数组，从键盘上输入数据，把数组中的数据逆序并输出
 */
int main() {
    int a[N], i, j, k;
    printf("input array:\n");
    for (int i = 0; i < N; i++)
        scanf("%d", &a[i]);
    i = 0;
    j = 9;
    while (i < j) {
        k = a[i];
        a[i] = a[j];
        a[j] = k;
        i++;
        j--;
    }
    for (int i = 0; i < N; i++) {
        printf("%d", a[i]);
    }
}