#include<stdio.h>
/*********Begin*********/
struct Student
{
    int Num;
    char name[20];
    int Score;
};
struct Student stu[10];

/*********End**********/
int main(void)
{
	/*********Begin*********/
    //录入学生人数
    int n;
    scanf("%d", &n);

    //录入学生信息
    for(int i = 0; i < n; i++) {
        scanf("%d %s %d", &stu[i].Num, stu[i].name, &stu[i].Score);
    }
    //按成绩从高到低排序
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-1; j++) {
            if(stu[j].Score < stu[j+1].Score) {
                struct Student temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }

    //输出排序后的学生信息
    for(int i = 0; i < n; i++) {
        printf("%d %s %d\n", stu[i].Num, stu[i].name, stu[i].Score);
    }

	/*********End**********/
    return 0;
}