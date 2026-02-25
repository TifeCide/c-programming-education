#include<stdio.h>
int a,b;
//编写最大公约数GCD函数
/*********Begin*********/
int fun_GCD(int a,int b){

    while(b!=0){
        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
/*********End**********/ 

//编写最小公倍数LCM函数
/*********Begin*********/
long long int fun_LCM(int a,int b){

    return (long long)a /fun_GCD(a,b)*(long long)b;

}
/*********End**********/ 
int main(void)
{  
    /*********Begin*********/
    scanf("%d %d",&a,&b);
    if(a<0 || b<0){
        printf("Input Error");
        return 0;
    }

    printf("%d ",fun_GCD(a,b));
    printf("%lld",fun_LCM(a,b));

    /*********End**********/ 
    return 0;
}
