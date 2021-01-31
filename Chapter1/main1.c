//
// Created by maxu on 2020/12/23.
//

#include<stdio.h>
/*
int main(void) {
    int age, price = 80;
    printf("请输入您的年龄:");
    scanf("%d", &age);
    if (age >= 60 || age <= 10)
        price /= 10;
    printf("您的年龄:%d,票价:%d\n", age, price);
    return 0;
}

*/

/*
int main() {
    int sum, s;
    int i;
    sum = 0;
    for (int i = 1; i < 100; i++) {
        if (i % 2 == 0) {
            s = -1;
        } else {
            s = 1;
        }
        sum += (2 * i - 1) * s;
    }
    printf("sum of (1-3+5-7+...-99+101)is:%d\n", sum);
    return 0;
}
*/


/*
int main()
{
    int age = 18;
    float height = 1.85;
    char unit = 'm';
    printf("小明今年%d岁\n", age);
    printf("小明身高%f%c\n", height, unit);
    printf("小葵花妈妈课堂开课了\n");
    return 0;
}



*/
/*
 int main()
 {int n=0,i;
    printf("请输入100以内的整数:");
    scanf("%d",&n);
    for(i=100;i>0;i++)
        if(i%n==0)break;
    printf("%d\n",i)  ;
    return 0;
}


 */
/*
int main() {


char grade;
scanf("%c", &grade);

switch (grade) {
case 'A':
printf("Excellent!\n");
break;
case 'B':
case 'C':
printf("Well done\n");
break;
case 'D':
printf("You passed\n");
break;
case 'F':
printf("Better try again\n");
break;
default:
printf("Invalid grade\n");
}

printf("Your grade is  %c\n", grade);

return 0;
}
*/

int main() {

    printf("Please input your grade(1-100):");
    int grade;
    scanf("%d", &grade);

    switch (grade / 10) {
        case 10:
        case 9:
            printf("A\n");
            break;

        case 8:
        case 7:
            printf("B\n");
            break;

        case 6:
        case 5:
            printf("C\n");
            break;
        default:
            break;

    }
    return 0;
}
/*

int main(){
    char c;
    printf("Input a character:");
    c=getchar();
    if(c<32)
        printf("This is a control character\n");
    else if(c>='0'&&c<='9')
        printf("This is a digit\n");
    else if(c>='A'&&c<='Z')
        printf("This is a capital letter\n");
    else if(c>='a'&&c<='z')
        printf("This is a small letter\n");
    else
        printf("This is an other character\n");
    return 0;
}

*/