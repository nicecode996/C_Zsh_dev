/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-07-20:26
*/
#include "math.h"
#include <stdio.h>//testbook  p31 6
                  /*
void main() {
    int a = 0, i;
    for (i = 1; i < 5; i++) {
        switch (i) {
            case 0:
            case 3:
                a += 2;
            case 1:
            case 2:
                a += 3;
            default:
                a += 5;
        }
    }
    printf("%d\n", a);
}
*/


/*
void main() {
    int k, s;
    for (k = 1, s = 0; k < 15; k++, s--) {
        if (s>k)
            break;
        else
            s+=k;

    }
    printf("(%d,%d)",k,s);
}
 */


/*                                      //testbook p32 9
void main() {
    int m, n;
    scanf("%d%d", &m, &n);
    while (m != n) {
        while (m > n)
            m -= n;
        while (n > m)
            n -= m;
    }
    printf("m=%d,n=%d\n", m, n);
}
*/

//�Ӽ�������һ����n����1^2+2^2+3^2+n^2
/*
void main() {
    int i, sum = 0, n;
    printf("������һ����:");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        sum = sum + i * i;
        i++;
    }
    printf("%d", sum);
}
*/
//1��20�Ľ׳�
/*
void main() {
    int a, b, s;
    a = 1;//ѭ������
    b = 1;//�˻�
    s = 0;//��
    for (a = 1; a < 20; a++) {
        b = b * a;
        s = s + b;
    }
    printf("1��20�Ľ׳���%d", s);
}
 */


/*
void main() {
    int i, j, k, n;
    for (n = 100; n < 1000; n++) {
        i = n % 10;
        j = n % 10 / 10;
        k = n / 100;
        if (n == i * i * i + j * j * j + k * k + k)
            printf("����һ��ˮ�ɻ���%d", n);
    }
}
 */

//һ������������100֮������ȫƽ�������ڼ���168����һ����ȫƽ������������ǣ�
/*
void main() {
    long int i;
    int j, k;
    //printf()��ѡ��Ӽ�����������
    //scanf()
    for (i = 1; i < 100000; i++) {
        j = sqrt(i + 100);
        k = sqrt(i + 168);
    }
    if (j *j == i + 100 &&k *k == i + 168)
        printf("%ld", i);
}
*/


//��Ǯ��ټ�
/*
void main() {
    int i, j, k;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            for (k = 0; k < 100; k++) {
                if (5 * i + 3 * j + k / 3 == 100 && i + j + k == 100 && k % 3 == 0)
                    printf("%d,%d,%d", i, j, k);
            }
            }

    }
}
*/

//ʥ����
/*
void main() {
    int i, j, k;
    for (i = 1; 1 <= 3; i++) {
        for (j - i; j < 7; j++) {
            printf(" ");
        }
        for (k = 1; k <= 2 * 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = 2; i <= 5; i++) {
        for (int j = 1; j <= 7; j++) {
            printf(" ");
            for (int k = 1; k <= 2 * 1; k++) {
                printf("*");
            }
            printf("*");
        }
        printf("\n");
    }
    for (int i = 3; i <= 7; i++) {
        printf("");
        for (int K = 1; K <= 2 * 1; K++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 0; i <= 5; i++) {
        printf("     *****");
        printf("    \n");
    }
    printf("ʥ������");
}

*/
//�žų˷���
// ����p43 ������

void main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", i, j, j * i);
        }
        printf("\n");
    }
}



/*
//����p43 �ڶ���
void main() {
    int i, j;
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d*%d=%d\t", i, j, j * i);
        }
        printf("\n");
    }
}

*/


//����p43  ��4��
/*
int main() {
    int x, y, z;
    for (x = 1; x <= 4; x++) {
        for (y = 0; y < x; y++) {
            printf(" ");
        }
        for (z = 7; z >= 2 * x - 1; z--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
 */

//����p43 ��һ��
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