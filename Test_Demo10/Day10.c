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
    printf("请输入字符串:");
    scanf("%s", s);
    len = fun(s);
    printf("字符串长度:%d\n", len);
    return 0;
}
*/

/*
int main() {
    float h, s;
    int i;
    h = s = 100;//初始高度赋值
    h = h / 2;  //每次反弹的高度
    for (i = 2; i < 10; i++) {
        s = s + 2 * h;  //每次反弹米数
        h = h / 2;      //每次反弹的高度
    }
    printf("%f\n", s);//总经过了多少米
    printf("%f\n", h);//第十次反弹高度
}
*/

int main() {
    int a[10];
    int i, j, k;
    printf("请输入10个整数:\n");
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
