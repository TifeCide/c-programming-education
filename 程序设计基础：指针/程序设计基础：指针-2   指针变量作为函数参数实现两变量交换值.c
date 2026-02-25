#include<stdio.h>
void swap(int *x, int *y)
{
	/*********Begin*********/
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

   /*********End**********/
}
int main()
{
	int a, b;
  	scanf("%d%d", &a, &b);
   
    /*********Begin*********/
	//调用swap函数交换两数的值：
    int *x,*y;
    x=&a;
    y=&b;
    swap(x,y);
    /*********End**********/
    printf("%d %d",a,b); //此句不要改动

    return 0;
}