/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-02-01-8:59
*/


#include "stdio.h"
#define M 2


/*
 * 成绩判断 问号表达式方式
 */
/*
int main() {
    int score;
    char grade;
    printf("请输入成绩:\n");
    scanf("%d", &score);
    grade = (score >= 90) ? 'A' : ((score >= 60) ? 'B' : 'C');       //问号表达式
    printf("%c\n", grade);
    return 0;
}
*/

/*
int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    printf("请输入一行字母:");
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
        else
            others++;
    }
    printf("字母=%d,数字=%d,空格=%d,其他=%d\n",letters,digits,spaces,others);
    return 0;
}
*/
/*
main() {
    int a, b, d = 241;
    a = d / 100 % 9;
    b = (-1) && (-1);
    printf("%d,%d\n", a, b);
}
*/

/*
void main() {
    int k, n = 0;
    for (int k = 1; k < NUM; k++) {
        n++;
        printf("%d", n);
    }
    printf("\n");
}
*/
/*
void main(){
    static int a[]={1,2,3,4,5,6};
    int *p;
    p=a;
    *(p+3)+=2;
    printf("%d%d\n",*p,*(p+3));
}
 */
/*
int m = 4, n = 6;
max(int x, int y) {
    int max;
    max = x > y ? x : y;
    return (max);
}
int main(){
    int m =10;
    printf("%d\n",max(m,n));
}
 */
/*
void main() {
    char a[] = "abcdefg", *b = "china";
    int i;
    for (i = 0; b[i] != '\0'; i++)
        a[i] = b[i];
        a[i] = '\0';
        puts(a);
    }
*/
/*
void main() {
    int a = 2, b = 5, c = 7;
    a = a > b ? a : b;
    a = a > c ? a : c;
    printf("%d", a);
}
 */

void main() {
    int i, c;
    static char num[][5] = {"CDEF", "ABCD"};
    for (i = 0; i < 4; i++) {
        c = num[0][i] + num[1][i] - 2 * 'A';
        printf("%3d", c);
    }
}