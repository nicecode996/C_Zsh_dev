/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-31-9:22
*/

#include "stdio.h"


/*
 * 国际象棋
 *
int main() {
    int i, j;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
            if ((i + j) % 2 == 0)
                printf("%c%c", 219, 219);
            else
                printf("  ");
        printf("\n");
    }
    return 0;
}
*/

/*
int main() {
    int i, j, k;
    for (int i = 1; i > 101; i++) {
        for (int j = 1; j < 200; j++) {
            if (k % 1 == 0 && k % k == 0)
        }
    }
    printf("%d",k);
}
*/


/*
void main() {
    int i, j;
    for (i = 101; i <= 200; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0)//只要除到一个数让 i 能被整除就跳出该循环。
            {
                break;
            } else {
                if (j == i - 1)//除完最后一个数后还不跳出循环，就可以判断该数为素数。
                {
                    printf("%d ", i);
                }
            }
        }
    }
}
*/


//水仙花数
/*
int main() {
    int i, j, k, m;
    printf("请输入一个100到1000的整数:");
    scanf("%d", &i);
    // for (int i = 100; i < 1000; i++) {
    j = i % 10;
    k = i / 10 % 10;
    m = i / 100 % 10;
    if (i == j * j * j + k * k * k + m * m * m)
        //   printf("%d\n", i);
        printf("这是一个水仙花数\n");
    else
        printf("这不是一个水仙花数\n");
}
// return 0;
*/
/*
int main()
{
    int i,x,y,z;
    for(i=100;i<1000;i++)
    {
        x=i%10;
        y=i/10%10;
        z=i/100%10;

        if(i==(x*x*x+y*y*y+z*z*z))
            printf("%d\n",i);

    }
    return 0;
}
 */


/*
void main() {
    /*
    double a;
    double c;
    double b;
    a = 1;
    c = 3;
    b = a / c;
    int w;
    float m = 2.1;
    w = int(m + 3);
    printf("%f", b);
     *
}
*/
/*
int main() {
    int a, b;
    printf("%d\n", b = (a = 32767, a + 1));
}
*/

int main() {
    int i, sum = 0;
    for (int i = 0; i < 6; i++) sum += i;
    printf("%d\n", sum);

}
