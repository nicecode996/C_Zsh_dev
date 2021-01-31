/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-15-19:30
*/

#include <stdio.h>

/*
int main() {
    int a = 2;
    int b = 3;
    printf("%d\n", a <= b);
    return 0;
}
*/
/*
void main() {
    int i, j, c;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            c = i * 10 + j;
            printf("%d\t", c);
        }
        printf("\n");
    }
}
*/
//九九乘法表
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d\t",i,j,j*i);
        }
        printf("\n");
    }
}