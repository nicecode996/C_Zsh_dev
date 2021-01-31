/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-06-18:37
*/

#include "math.h"
#include <stdio.h>
/*
 *
 * int main()
{
    int a=3,b=4;
    printf("%d\n",a<=b);
    return 0;
}
 */


/*void main()
{
    int a=1,b=2,m=0,n=0,k;
    k=(n=b>a)||(m=a,b);
    printf("%d,%d\n",k,m);    //结果为1,0
}
 */


/*int main()      //练习册15页12题
{
    int a=2,b=-1,c=2;
    if(a<b)
    if(b>0)
        c=0;
    else
        c++;
    printf("%d\n",c);
}
 */



/*int main()
{
    int x=3,y=0,z=0;
    if(x=y+z)
    printf("***");
    else
        printf("###");
}
 */



/*int main() {                      //练习册p17
                                  // 17题
    int x = 10, y = 20, z = 30;
    if (x > y)
        z = x;
    x = y;
    y = z;
    printf("%d,%d,%d\n",x,y,z);
    return 0;
}
 */

/*void  main()       //testbook  p18
{                   //21题
    float w;
    int a,b;
    switch (a) {
        case 1:
            printf("*\n");
        case 2:
            printf("**\n");
    }
    printf("%d",a);
}
*/


/*void main() {
    float x = 1.5;
    int a = 1, b = 3, c = 2;
    switch ((int) x)
        ;
    {
        case 1.0:
            printf("*\n");
        case 2.0:
            printf("**\n");
    }
}
 */

/*void main()
{
    int x=2,y=4;
    switch (x) {
        case 2:
            switch (y) {
                case 4:printf("first\n");break;
                case 8:printf("second\n");break;
            }
        case 4:printf("third\n");break;
    }
}
 */


//计算器，四则运算
/*void main() {
    double a, b;
    int c;
    printf("请选择运算种类(1:加法,2:减法,3:乘法,4:除法):");
    scanf("%d", &c);
    printf("请输入要参与运算的数:");
    scanf("%lf %lf", &a, &b);
    switch (c) {
        case 1:
            printf("a+=b=%f", a + b);
            break;
        case 2:
            printf("a-b=%f", a - b);
            break;
        case 3:
            printf("a/b=%f", a * b);
            break;
        case 4:
            printf("a*b=%f", a / b);
            break;
        default:
            printf("error\n");
            break;
    }
}
*/


//水仙花数

void main() {
    int a, i, j, k;
    printf("请输入一个数字验证是否为水仙花数:\n");
    scanf("%d", &a);
    i = a % 10;     //各位
    j = a / 10 % 10;//十位
    k = a / 100;    //百位

    if (a == i * i * i + j * j * j + k * k * k)
        printf("这是一个水仙花数\n");
    else
        printf("这不是一个水仙花数");
}



//三角形的面积和周长
/*
void main() {
    double a, b, c, area, per, s;
    printf("请输入边长:");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        per = a + b + c;    //三角形周长
        s = (a + b + c) / 2;//半周长
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%lf,%lf", area, per);
    }

    else
        printf("不能构成三角形");
}
 */

//闰年判断
/*
int main() {
    int a;
    printf("请输入一个年份:");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        printf("闰年");
    else
        printf("不是闰年");
    return 0;
}
*/


//判断每个月有多少天
/*
void main() {
    int year, month, leep = 0;

    printf("请输入年份,月份");
    scanf("%d,%d", &year, &month);
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        ;
    leep = 1;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
        case 2:
            printf("%d", 28 + leep);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        default:
            printf("error");
    }
}
*/

//成绩判断
/*
void main() {
    int a;
    printf("请输入数字");
    scanf("%d", &a);
    if (a >= 90)
        printf("A");
    else if (a >= 80)
        printf("B");
    else if (a >= 70)
        printf("C");
    else if (a >= 60)
        printf("D");
    else
        printf("E");
}
 */
/*
int main() {
    int a;
    printf("请输入成绩:");
    scanf("%d", &a);
    switch (a / 10) {
        case 10:
            printf("优秀");
            break;
        case 9:
            printf("良好");
            break;
        case 8:
            printf("挺好");
            break;
        case 7:
            printf("一般");
            break;
        case 6:
            printf("及格");
            break;
        default:
            printf("不及格");
            break;
            return 0;
    }
}
 */