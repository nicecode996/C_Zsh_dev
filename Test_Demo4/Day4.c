/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-26-10:08
*/


#include "math.h"
#include "stdio.h"

//��1,2,3,4�ĸ���������ɶ����ֲ�ͬ������
/*
int main() {
    int i, j, k, sum;
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j < 5; j++) {
            for (int k = 1; k < 5; k++) {
                if (i != j && i != k && j != k)
                    printf("%d%d%d\n", i, j, k);
            }
        }
    }
}
*/

/*
 *һ����������100�Ժ�����ȫƽ�������ڼ���168�Ժ�����ȫƽ�����������
 *
 */

int main() {
    long int i, x, y, z;
    for (int i = 0; i < 100000; i++) {
        x = sqrt(i + 100);
        y = sqrt(i + 268);
        if (x * x == i + 100 && y * y == i + 268)
            printf("%ld\n", i);
    }
}

/*
void main(){
    char a = 176;
    char b = 219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
}
*/