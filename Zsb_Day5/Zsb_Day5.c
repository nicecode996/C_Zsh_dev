/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-09-18:45
*/


#include <stdio.h>


//编写函数isprime(),用来判断自变量x是否为素数。若是素数，函数返回整数1，否则返回0，讲义p63 3题
/*
int isprime(int x);
int main() {
    int x;
    printf("请输入一个数:");
    scanf("%d", &x);
    //isprime(x);//返回值
    printf("%d", isprime(x));
}

int isprime(int x) {
    int i;
    int flag = 1;
    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            flag = 0;
            break;
        }
        return flag;
    }
}
*/

/*
 * 编写函数myupper(ch),把ch中的小写字母转换成大写字母最为函数返回值返回，其他字符不变，
 * 主函数中不断舒服字符，用字符@结束输入，同时不断输出结果
 * 讲义p63   4题
 */
/*
char myupper(char ch) {
    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;//小写转大写
    return ch;
}
void main() {
    char c;
    while ((c = getchar()) != '@') {
        c = myupper(c);
        putchar(c);
    }
}
*/

/*
int fun(int x, int y) {
    return (x + y);
}
void main() {
    int a = 1, b = 2, c = 3, sum;
    sum = fun((a++, b++, a + b), c++);
    printf("%d\n", sum);
}
 */


int fun(
        /*
long fib(int n){
    if(n>2)
        return (fib(n-1)+fib(n-2));
    else
        return (2);
}
void main(){
    printf("%ld\n",fib(3));
}
*/
        int x, int y) {
    static int m = 0, i = 2;
    i += m + 1;
    m = i + x + y;
    return m;

    void main() {
        int j = 1, m = 1, k;
        k = fun(j, m);
        printf("%3d", k);
        k = fun(j, m);
        printf("%3d", k);
    }