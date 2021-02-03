/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-02-9:33
*/

#include "stdio.h"
//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，
// 共经过多少米？第10次反弹多高？
/*
int main() {
    float h, s;
    int i;
    h = s = 100;
    h = h / 2;
    for (i = 2; i < 10; i++) {
        s = s + 2 * h;
        h = h / 2;
    }
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n", s, h);
    return 0;
}
*/

/*
 * 简单函数调用
 */
/*
void hello_world(void) {
    printf("Hello world--麻旭\n");
}
void three_world(void) {
    int counter;
    for (counter = 1; counter <= 2; counter++)
        hello_world();
}
int main() {
    three_world();
}
*/
/*
int main() {
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int i, j, sum;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (j > i)
                sum += a[i][j];
            printf("%d", sum);
        }
    }
}
 */

/*
int main() {
    int a = 5, b = 6;
    printf("%d", fun(a, b));
    printf("%d", fun(b, a));
}
fun(int x, int y) {
    static int m = 0;
    int i = 2;
    i += m + 1;
    m = i + x + y;
    return (m);
}
*/

/*
int fib(int g) {
    switch (g) {
        case 1:
        case 2:
            return 1;
    }
    return (fib(g - 1) + fib(g - 2));
}
int main() {
    int k;
    k = fib(5);
    printf("%d\n", k);
}
 */
/*
int main() {
    char a[10];
    int i = 0, sum;
    printf("Please input a binary data string:\n");
    scanf("%s", a);
    sum = a[i] - '0';
    while (a[i + 1] != '\0') {
        sum = sum * 2 + a[i + 1] - '0';
        i = i + 1;
    }
    printf("%d", sum);
}
 */
/*
int main() {
    int b[3][3] = {0, 1, 2, 0, 1, 2, 0, 1, 2}, i, j, t = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            t = t + b[i][b[i][j]];
            printf("%d", t);
        }
    }
}
 */
/*
int main() {
    int i = 3, *p1;
    int a[3] = {15, 30, 45}, *p2;
    p1 = &i;
    p2 = a;
    p1 = p2 + 2;
    printf("%d,%d\n", *p1, *p2);
}
*/

/*
int x = 0;
void f();
void main() {
    if (x == 0) {
        int x = 2;
        printf("%d", x);
    }
    printf("%d", x);

     f();
    printf("%d", x);

}
void f() {
    x = 3;
    printf("%d", x);
}
*/

void main() {
    int i, k, a[10], p[3];
    k = 5;
    for (int i = 0; i < 10; i++) a[i] = i;
    for (int i = 0; i < 3; i++) p[i] = a[i * (i + 1)];
    for (int i = 0; i < 3; i++) k += p[i] * 2;
    printf("%d\n",k);
}
