/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-07-8:08
*/

#include "stdio.h"
#define N 7
#include "string.h"

//* 共七个评委打分，去掉最高分，去掉最低分，求出平均分
/*
void main() {
    int i, max, min, sum, a[N];
    float average;
    for (i = 1; i <= N; i++) {
        printf("请输入%d位评委的分数:", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    max = a[i];
    min = a[i];
    for (i = 2; i <= 7; i++) {
        if (max > a[i]) max = a[i];
        if (min < a[i]) min = a[i];
    }
    average = (sum - min - max) / 5;
    printf("%f\n", average);
}
*/

//输入三个字符串，找出其中最大的字符串
/*
int main() {
    char str[3][20];
    char string[20];
    int i;
    for (int i = 0; i < 3; i++) {
        gets(str[i]);
    }
    if (strcmp(str[0], str[1]) > 0)
        strcpy(string, str[0]);
    else
        strcpy(string, str[1]);
    if (strcmp(str[2], string) > 0)
        strcpy(string, str[2]);
    printf("\n");
    printf("%s\n", string);
    return 0;
}
*/
