/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-14-20:58
*/


#include "stdio.h"
#define PI 3.14
//�������ܳ�
/*
void main() {
    int a, b, area, per;
    printf("������һ����:\n");
    scanf("%d %d", &a, &b);
    area = (a + b) * 2;
    printf("%d", area);
}
*/
//Բ�����
/*
void main() {
    double r, area;
    printf("������һ����");
    scanf("%lf", &r);   //ע�ⳤ����
    area = PI * r * r;
    printf("%f",area);
}
 */

//��������ƽ����
/*
void main() {
    int a, b, s;
    printf("������������:\n");
    scanf("%d %d", &a, &b);
    s = a * a + b * b;
    printf("%d", s);
}
 */

//�ַ���ӡ��ϰ
void main() {
    char ch = 'b';
    int x = 100;
    printf("ch = %c,4c,%d\n", ch, ch, ch);
    //printf("ch=%c,%4c,%d\n", ch, ch, ch);
    printf("x=%d,%c\n", x, x);
}
