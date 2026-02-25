#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int n;
    scanf("%d", &n);
    int num[1000];
    //输入n个整数存入数组num中
    for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
    }

    int FNum;
    scanf("%d", &FNum);
    int status=0;
    int j;
    for(j=0;j<n;j++){
        if(num[j]==FNum){
            status=1;
            break;
        }
    }
    //输出查找结果
    if(status==1){
    printf("%d\n", j+1);
    }
    else 
    printf("None\n");

    /*********End**********/
    return 0;
}