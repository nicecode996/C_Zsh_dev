/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-28-9:07
*/

#include "stdio.h"
/*
 * ��һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
 */
/*
int main() {
    long a, b, c, d, e, f;
    printf("������5λ��:");
    scanf("%ld",&f);
    a = f / 10000;
    b = f % 10000 / 1000;
    c = f % 1000 / 100;
    d = f % 100 / 10;
    e = f % 10;
    if (a != 0) {
        printf("Ϊ5λ��������Ϊ��%d %d %d %d %d\n", e, d, c, b, a);
    } else if (b != 0) {
        printf("Ϊ4λ��������Ϊ��%d %d %d %d\n", e, d, c, b);
    } else if (c != 0) {
        printf("Ϊ3λ��������Ϊ��%d %d %d\n", e, d, c);
    } else if (d != 0) {
        printf("Ϊ2λ��������Ϊ��%d %d\n", e, d);
    } else if (e != 0) {
        printf("Ϊ1λ��������Ϊ��%d\n", e);
    }
}
*/

/*
 * ���Ľ׳�
 */
int main() {
    int i;
    long factorial = 1;
    int n;
    printf("������һ����:");
    scanf("%d", &n);
    if (n < 0)
        printf("error,����û�н׳�");
    else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;// factorial = factorial*i;
        }
        printf("%d!(�Ľ׳�) = %llu", n, factorial);
    }
}