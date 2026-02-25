#include<stdio.h>
//编写函数
/*********Begin*********/
int plusplus(int x){
    int y=0;
    for(int i=1;i<=x;i++){
        y += i;
    }
    return y;
}
/*********End**********/ 
int main(void)
{  
    /*********Begin*********/
    int x;
    scanf("%d",&x);
    int result = plusplus(x);
    printf("%d",result);
    /*********End**********/ 
    return 0;
}
