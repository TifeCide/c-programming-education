#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void read(int a[], int n)
{
	// 补充代码，从键盘读入n个整数到数组a
    for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }    
}

void sort(int a[], int n)
{
	// 补充代码，对数组a的前n个元素按照绝对值升序排序

  for(int i =0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
      if(abs(a[j])>abs(a[j+1])){
        int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
    }
  }

void print(int a[], int n) // 输出数组a的前n个元素
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);		
	}
	printf("\n");
}
int main()
{
	int n;
	int a[100];
	scanf("%d", &n);
	read(a, n);
	// _______调用sort函数对数组元素按照绝对值升序排序
  sort(a, n);
	print(a, n);
}