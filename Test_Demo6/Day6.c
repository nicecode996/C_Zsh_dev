/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-28-13:52
*/

#include "stdio.h"
/*
int main() {
    char c;
    char a;
    char s;
    s = c + a;
    printf("%c", s);
}
*/
/*
void main() {
    int m = 0;
    int n = 0;
    char c = 'a';
    scanf("%d%c%d",&m,&c,&n);
    printf("%d,%c,%d\n",m,c,n);
}*/

/*
void main(){
    int a,*pa-&a;
    scanf("%d",pa);
}
 */
/*
void main() {
    char *s[] = {"one", "two", "three"}, *p;
    p = s[1];
    printf("%c,%s\n", *(p + 1), s[0]);
}
 */
/*
int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10},*p=&a[3],b;
    b=p[5];
    printf("%d",b);
}
 */

void main() {
    char a, b, c, *d;
    a = '\'; b='\xbc '; c = '\0xab'; d = '\017';





    printf("%c%c%c\n", a, b, c, *d);
}