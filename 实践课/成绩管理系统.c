#include<stdio.h>
#include<string.h>
#define MAX_STUDENTS 50
#define COURSE_NUM 3
int stuNO[MAX_STUDENTS];
char stuName[MAX_STUDENTS][20];
int scores[MAX_STUDENTS][COURSE_NUM];
float avgScoreC[MAX_STUDENTS];
int totalScore[MAX_STUDENTS];
int count=0;

void showMenu();
void inputScores();
void queryScores();
void modifyScores();
void statScores();
void sortScore();
int findStudent(int no);

int main(){
    int choice;
    while (1){
        showMenu();
        scanf("%d",&choice);
        getchar();
        switch(choice){
            case 1: inputScores(); break;
            case 2: queryScores(); break;
            case 3: modifyScores(); break;
            case 4: statScores(); break;
            case 5: sortScore(); break;
            case 6: printf("再见！\n"); exit(0);
            default: printf("输入错误！\n");
        }
        system("pause");
        system("cls");
    }
    return 0;
}

void showMenu(){
    printf("===== 成绩管理系统 =====\n");
    printf("1.录入成绩  2.查询成绩\n");
    printf("3.修改成绩  4.统计成绩\n");
    printf("5.排序排名  6.退出\n");
    printf("请选择(1-6)：");
}

// 录入成绩
void inputScores(){
    if(count>=MAX_STUDENTS){printf("人数满了！\n");return;}
    printf("输入学号：");scanf("%d",&stuNO[count]);
    printf("输入姓名：");scanf("%s",stuName[count]);
    printf("输入3门成绩：");
    for(int i=0;i<COURSE_NUM;i++){
        scanf("%d",&scores[count][i]);
        totalScore[count] += scores[count][i];
    }
    avgScoreC[count] = totalScore[count]/3.0;
    count++;
    printf("录入成功！\n");
}

// 查找学生
int findStudent(int no){
    for(int i=0;i<count;i++)
        if(stuNO[i]==no) return i;
    return -1;
}

// 查询成绩
void queryScores(){
    int no;
    printf("输入查询学号：");scanf("%d",&no);
    int idx=findStudent(no);
    if(idx==-1){printf("无此学生！\n");return;}
    printf("学号：%d 姓名：%s\n",stuNO[idx],stuName[idx]);
    printf("成绩：%d %d %d 总分：%d 平均分：%.1f\n",
           scores[idx][0],scores[idx][1],scores[idx][2],
           totalScore[idx],avgScoreC[idx]);
}

// 修改成绩
void modifyScores(){
    int no;
    printf("输入修改学号：");scanf("%d",&no);
    int idx=findStudent(no);
    if(idx==-1){printf("无此学生！\n");return;}
    printf("输入新3门成绩：");
    totalScore[idx]=0;
    for(int i=0;i<COURSE_NUM;i++){
        scanf("%d",&scores[idx][i]);
        totalScore[idx] += scores[idx][i];
    }
    avgScoreC[idx] = totalScore[idx]/3.0;
    printf("修改成功！\n");
}

// 统计成绩
void statScores(){
    float classAvg=0;
    int max=totalScore[0],min=totalScore[0];
    for(int i=0;i<count;i++){
        classAvg += totalScore[i];
        if(totalScore[i]>max) max=totalScore[i];
        if(totalScore[i]<min) min=totalScore[i];
    }
    classAvg /= count;
    printf("总人数：%d 平均分：%.1f\n",count,classAvg);
    printf("最高分：%d 最低分：%d\n",max,min);
}

// 排序排名
void sortScore(){
    // 简单冒泡排序（修改原数组）
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1-i;j++){
            if(totalScore[j]<totalScore[j+1]){
                // 交换总分（简化：只排序显示，不交换其他数据）
                int temp=totalScore[j];
                totalScore[j]=totalScore[j+1];
                totalScore[j+1]=temp;
                // 交换学号和姓名（保证对应关系）
                int tNo=stuNO[j]; stuNO[j]=stuNO[j+1]; stuNO[j+1]=tNo;
                char tName[20]; strcpy(tName,stuName[j]);
                strcpy(stuName[j],stuName[j+1]); strcpy(stuName[j+1],tName);
            }
        }
    }
    printf("排名 学号 姓名 总分\n");
    for(int i=0;i<count;i++){
        printf("%d    %d   %s   %d\n",i+1,stuNO[i],stuName[i],totalScore[i]);
    }
}
