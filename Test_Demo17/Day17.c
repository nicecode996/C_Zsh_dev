/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-26-8:08
*/
#include "stdio.h"
/*
int main() {
    int i, j;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d*%d=%d\t", i, j, i * j);
        }
        printf("\n");
    }
}

*/

int main() {
    int day, month, year, sum, leap;
    printf("\n�������ꡢ�¡��գ���ʽΪ����,��,�գ�2015,12,10��\n");
    scanf("%d,%d,%d", &year, &month, &day);// ��ʽΪ��2015,12,10
    switch (month)                         // �ȼ���ĳ����ǰ�·ݵ�������
    {
        case 1:
            sum = 0;
            break;
        case 2:
            sum = 31;
            break;
        case 3:
            sum = 59;
            break;
        case 4:
            sum = 90;
            break;
        case 5:
            sum = 120;
            break;
        case 6:
            sum = 151;
            break;
        case 7:
            sum = 181;
            break;
        case 8:
            sum = 212;
            break;
        case 9:
            sum = 243;
            break;
        case 10:
            sum = 273;
            break;
        case 11:
            sum = 304;
            break;
        case 12:
            sum = 334;
            break;
        default:
            printf("data error");
            break;
    }
    sum = sum + day;                                            // �ټ���ĳ�������
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {// �ж��ǲ�������
        leap = 1;
    } else {
        leap = 0;
    }
    if (leap == 1 && month > 2) {// *������������·ݴ���2,������Ӧ�ü�һ��
        sum++;
    }
    printf("������һ��ĵ� %d �졣", sum);
    printf("\n");
}
