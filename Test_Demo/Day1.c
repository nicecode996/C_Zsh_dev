/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-14-20:58
*/


#include "stdio.h"
#define PI 3.14
//长方形周长
/*
void main() {
    int a, b, area, per;
    printf("请输入一个数:\n");
    scanf("%d %d", &a, &b);
    area = (a + b) * 2;
    printf("%d", area);
}
*/
//圆的面积
/*
void main() {
    double r, area;
    printf("请输入一个数");
    scanf("%lf", &r);   //注意长精度
    area = PI * r * r;
    printf("%f",area);
}
 */

//两个数的平方和
/*
void main() {
    int a, b, s;
    printf("请输入两个数:\n");
    scanf("%d %d", &a, &b);
    s = a * a + b * b;
    printf("%d", s);
}
 */

//字符打印练习
void main() {
    char ch = 'b';
    int x = 100;
    printf("ch = %c,4c,%d\n", ch, ch, ch);
    //printf("ch=%c,%4c,%d\n", ch, ch, ch);
    printf("x=%d,%c\n", x, x);
}
