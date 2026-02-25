#include<stdio.h>
double fun(int *arr, int n, int *pMax, int *pMin )
{
   /*********Begin*********/
   *pMax=0;
   *pMin=0;
   int total=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[*pMax]){
            *pMax=i;
        }
        if(arr[i]<arr[*pMin]){
            *pMin=i;
        }
        total += arr[i];
    }


    return (double)total/n;
	/*********End**********/
}
int main()
{
   int a[100] ;
   int i, n, max, min; // 最大值下标，最小值下标
   double mean;
   scanf("%d", &n);
   for(i = 0; i < n; i++){
   	scanf("%d", &a[i]);
   }

    /*********Begin*********/
 	//调用函数并输出最大值下标，最小值下标，平均值
    mean=fun(a,n,&max,&min);
    printf("最大值下标：%d\n",max);
    printf("最小值下标：%d\n",min);
    printf("平均值：%.1f\n",mean);
	/*********End**********/
  

   return 0;
}
