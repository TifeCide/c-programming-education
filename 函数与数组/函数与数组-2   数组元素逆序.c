#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void read(int a[], int n)
{
	// 补充代码，从键盘读入n个整数到数组a
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

}

void reverse(int a[], int n)
{
	// 补充代码，把数组a的元素逆序
    int i=0,j=n-1;
    while(i<j){
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
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
	// __________调用reverse函数把数组元素逆序
    reverse(a, n);
	print(a, n);
}
