/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-28-9:57
*/

#include "stdio.h"

//从小到大排序   解题思路引入第三变量进行赋值传递，收尾相连赋值

/*
int main() {
    int x, y, z, t;
    printf("请输入三个数字:\n");
    scanf("%d%d%d", &x, &y, &z);
    if (x > y) {
        t = x;
        x = y;
        y = t;
    }
    if (x > z) {
        t = z;
        z = x;
        x = t;
    }
    if (y > z) { /*交换z,y的值*/
        t = y;
        y = z;
        z = t;
    }
    printf("从小到大排序: %d %d %d\n", x, y, z);
}
*/

