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
    printf("%d,%d\n",k,m);    //���Ϊ1,0
}
 */


/*int main()      //��ϰ��15ҳ12��
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



/*int main() {                      //��ϰ��p17
                                  // 17��
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
{                   //21��
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


//����������������
/*void main() {
    double a, b;
    int c;
    printf("��ѡ����������(1:�ӷ�,2:����,3:�˷�,4:����):");
    scanf("%d", &c);
    printf("������Ҫ�����������:");
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


//ˮ�ɻ���

void main() {
    int a, i, j, k;
    printf("������һ��������֤�Ƿ�Ϊˮ�ɻ���:\n");
    scanf("%d", &a);
    i = a % 10;     //��λ
    j = a / 10 % 10;//ʮλ
    k = a / 100;    //��λ

    if (a == i * i * i + j * j * j + k * k * k)
        printf("����һ��ˮ�ɻ���\n");
    else
        printf("�ⲻ��һ��ˮ�ɻ���");
}



//�����ε�������ܳ�
/*
void main() {
    double a, b, c, area, per, s;
    printf("������߳�:");
    scanf("%lf,%lf,%lf", &a, &b, &c);
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        per = a + b + c;    //�������ܳ�
        s = (a + b + c) / 2;//���ܳ�
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("%lf,%lf", area, per);
    }

    else
        printf("���ܹ���������");
}
 */

//�����ж�
/*
int main() {
    int a;
    printf("������һ�����:");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
        printf("����");
    else
        printf("��������");
    return 0;
}
*/


//�ж�ÿ�����ж�����
/*
void main() {
    int year, month, leep = 0;

    printf("���������,�·�");
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

//�ɼ��ж�
/*
void main() {
    int a;
    printf("����������");
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
    printf("������ɼ�:");
    scanf("%d", &a);
    switch (a / 10) {
        case 10:
            printf("����");
            break;
        case 9:
            printf("����");
            break;
        case 8:
            printf("ͦ��");
            break;
        case 7:
            printf("һ��");
            break;
        case 6:
            printf("����");
            break;
        default:
            printf("������");
            break;
            return 0;
    }
}
 */