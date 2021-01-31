/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-08-19:26
*/


#include <stdio.h>

/*
void main() {
    int a[10];
    int max, min, i, n, m;
    printf("请输入10个数(中间以空格隔开):");
    for (i = 0; i < 10; i++) {//循环输入
        scanf("%d", &a[i]);
        max = a[0];
        min = a[0];
        for (i = 0; i < 10; i++) {//遍历大小
            if (max < a[i]) {
                max = a[i];
                m = i;
            }
        }
        if (min > a[i])
            n = i;
    }
    printf("下标%d,最大值:%d\n", m, max);
    printf("下标%d,最小值:%d", n, min);
}
*/

/*
 * 1 2
 * 3 4
 * 5 6
 * 转置到135 246
 */

/*
void main() {
    int a[3][2];
    int b[2][3];
    int i, j;
    printf("请输入1 3 5(横向),2 4 6(横向): ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 2; j++) {
                    printf("%d", &a[i][j]);
                }
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 3; j++) {
                        b[i][j] = a[i][j];
                        for (int i = 0; i < 2; i++) {
                            for (int j = 0; j < 3; j++) {
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d", b[i][j]);
}
*/

//二维数组最大值，下标，和平均值


/*
void main() {
    int a[3][3];
    double average;
    int max, sum, i, j, n, m;
    printf("请输入9个数（空格隔开）:");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            max = a[i][j];
            for (int i = 0; i < 3; i++) {
                for (int j = 0; i < 3; i++) {
                    if (max < a[i][j]) {
                        max = a[i][j];
                        m = i;
                        n = j;
                        sum = sum + a[i][j];
                    }
                    average = sum / 9.0;
                }
            }
        }
    }
    printf("下标是:[%d][%d]\n", m, n);
    printf("最大值是:%d\n",m,n,max);
    printf("平均值为:%d\n", average);
    printf("和为:%d", sum);
}
*/

/*
 * 均值
 *
int main() {
    int i;
    int a[10];
    int sum = 0;
    double average;
    printf("请输入10个数");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++) {
        sum += a[i];
        average = sum / 10.0;
    }
    printf("平均值是:%f", average);
    printf("和为:%d", sum);
}
 */
/*
void main() {
    int i, a[10];
    for (int i = 9; i >= 0; i--) {
        a[i] = 10 - i;
        printf("%d%d%d", a[2], a[5], a[8]);
    }
}
*/
/*
void main() {
    int p[7] = {11, 13, 14, 15, 16, 17, 18}, i = 0, k = 0;
    while (i < 7 && p[i] % 2) {
        k = k + p[i];
        i++;
    }
    printf("%d\n",k);
}
 */
/*
void main() {
    int i, k, a[10], p[3];
    k = 5;
    for (int i = 0; i < 10; i++) a[i] = i;
    for (int i = 0; i < 3; i++) p[i] = a[i * (i + 1)];
    for (int i = 0; i < 3; i++) k += p[i] * 2;
    printf("d\n", k);
}
*/

