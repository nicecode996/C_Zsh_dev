/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-05-18:34
*/

#include <math.h>
#include <stdio.h>
#define PI 3.14
/*main() {
    printf("hello world\n")
}

*/

/*int main() {                             //长方形周长
    int a, b, z;
    printf("input number:\n");
    scanf("%d %d", &a, &b);
    z = (a + b) * 2;
    printf("这个长方形的周长是%d\n", z);
            return 0;
}

*/
//圆的面积
void main() {
    //float r;                  //处理精度6位以下
    double r;//处理精度6位以上
    double s, girth;
    int d;//定义圆的半径
    printf("请输入圆的半径");
    scanf("%lf", &r);//lf长实型
    s = PI * r * r;  //圆的面积计算公式πr^2
    girth = PId;
    printf("");
    printf("圆的面积是:%f\n", s);
}


/*int main() {                              //长方形面积
    int a, b, s;
    printf("input number:\n");
    scanf("%d %d", &a, &b);
    s = a * b;
    printf("这个长方形的面积是%d\n",s);
    return 0;
}
 */


//两个数的平方和
/*int main() {
    int a, b, s;
    printf("请输入两个数");
    scanf("%d %d", &a, &b);
    s = a * a + b * b;
    printf("平方和为:%d\n", s);
    return 0;
}
 */

/*void main(){
    char ch ='b';
    int x =65;
    printf("ch=%c,%4c,%d\n",ch,ch,ch);
    printf("x=%d,%c\n",x,x);
}
 */

/*void main() {
    int a, b;
    float c;
    char ch;
    a = 123;
    b = -1;
    c = 1.23;
    ch = 'a';
    printf("a=%d,a=%4d\n", a, a);
    printf("%d,%o,%x,%u\n", b, b, b, b);
    printf("%f,%6.1f\n", c, c);
    printf("%c\n", ch);
}
 */
/*int main() {
    int x;
    x = 11 / 3;
    int y = 5;
    printf("%%d,%%%d\n", x, y);
}
*/

/*int main()
{
    int x=100,y=200;
    printf("%d\n",x,y);
}
 */