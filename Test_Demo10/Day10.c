/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-05-10:01
*/


#include "stdio.h"
#include "stdlib.h"
#define N 100
/*
int main() {
    for (int i = 0; i < 141; i++) {
        if (i % 4 == 0)
            printf("%d\n", i);
    }
}
*/
/*
void main() {
    int len;
    char *str[20];
    scanf("%s", str);
    len = length(str);
    printf("\nlen=%d\n", len);
}
length(*p);
{
    int n = 0;
    while (*p != '\0') {
        n++;
        p++;
    }
    return (n);
}
*/

/*
int fun(char *s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }
    return i;
}

int main() {

    int len;
    char s[N];
    printf("�������ַ���:");
    scanf("%s", s);
    len = fun(s);
    printf("�ַ�������:%d\n", len);
    return 0;
}
*/

/*
int main() {
    float h, s;
    int i;
    h = s = 100;//��ʼ�߶ȸ�ֵ
    h = h / 2;  //ÿ�η����ĸ߶�
    for (i = 2; i < 10; i++) {
        s = s + 2 * h;  //ÿ�η�������
        h = h / 2;      //ÿ�η����ĸ߶�
    }
    printf("%f\n", s);//�ܾ����˶�����
    printf("%f\n", h);//��ʮ�η����߶�
}
*/

int main() {
    int a[10];
    int i, j, k;
    printf("������10������:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        for (int j = 0; j < 9; j++)
            for (int i = 0; i < 9 - j; i++)
                if (a[i] > a[i++]) {
                    k = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = k;
                }

        for (int i = 0; i < 10; i++) {
            printf("%d", a[i]);
        }
    }
}
