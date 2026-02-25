#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int N,m;//N为数组大小,m为要查找的元素
    int i;
    scanf("%d", &N);//输入数组大小
    int a[1000];
    
    //输入数组元素
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&m);//输入要查找的元素
    int Num = -1;
    for(i=0;i<N;i++){
        if(a[i]==m){
            Num = i+1;
            break;//找到后跳出循环
        }
    }
    printf("%d\n",Num);
    /*********End**********/
    return 0;
}