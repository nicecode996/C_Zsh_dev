/**
@author maxu
@blog https://39.106.108.65
@Created by 2021-01-11-21:14
*/


#include "stdio.h"
 main() {
    struct student {
        char no[6];
        char name[6];
        int cj[3];
        double pj[];
    } stu[3];
    int i, j, sum;
    for (int i = 0; i < 5; i++) {
        printf("请输入学号");
        scanf("%s", stu[i].no);
        printf("请输入姓名");
        scanf("%s", stu[i].name);
        for (int j = 0; j < 3; j++) {
            printf("请输入成绩");
            scanf("%d", &stu[i].cj[j]);
            sum += stu[i].cj[j];
        }
        stu[i].pj = sum / 3.0;
        printf("%d", stu[i].pj);
    }
}