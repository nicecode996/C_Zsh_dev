/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-09-18:45
*/


#include <stdio.h>


//��д����isprime(),�����ж��Ա���x�Ƿ�Ϊ����������������������������1�����򷵻�0������p63 3��
/*
int isprime(int x);
int main() {
    int x;
    printf("������һ����:");
    scanf("%d", &x);
    //isprime(x);//����ֵ
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
 * ��д����myupper(ch),��ch�е�Сд��ĸת���ɴ�д��ĸ��Ϊ��������ֵ���أ������ַ����䣬
 * �������в�������ַ������ַ�@�������룬ͬʱ����������
 * ����p63   4��
 */
/*
char myupper(char ch) {
    if (ch >= 'a' && ch <= 'z')
        ch = ch - 32;//Сдת��д
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