#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int m,n;
    printf("Input m, n:");
    scanf("%d,%d",&m,&n);
    int array[10][10];
    printf("Input %d*%d array:\n",m,n);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&array[i][j]);
    int max=array[0][0],row=1,col=1;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(array[i][j]>max)
            {
                max=array[i][j];
                row=i+1;
                col=j+1;
            }
    printf("max=%d, row=%d, col=%d",max,row,col);
    /*********End**********/
    return 0;
}