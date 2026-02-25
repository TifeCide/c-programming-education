#include <stdio.h>
#define SIZE 20 //预定义要进行转置的矩阵最大大小为 20*20

//矩阵的输入函数
void inputMatrix(int a[][SIZE] , int n, int m){ //二维数组参数下标必须要确定
  /**********  Begin ***********/
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
  /**********  End  **********/
}

//矩阵的输出函数
void outputMatrix(int b[][SIZE] , int n, int m){
  /**********  Begin ***********/
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
  /**********  End  **********/
}

//矩阵的转置运算
void matrixTransport(int a[][SIZE], int b[][SIZE], int row, int column ){
   /**********  Begin ***********/
int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < column; j++) {
            b[j][i] = a[i][j];
        }
    }

  /**********  End  **********/
}

int main()
{ 
 //定义数组并初始化
 int a[SIZE][SIZE]={0};
 int b[SIZE][SIZE]={0};//定义数组，注意要初始化

 int row, column;

 //矩阵行，列数的确定
 printf("请输入您要进行转置的矩阵的行数(2~20) : row =  ");
 scanf("%d",&row);
 printf("\n请输入您要进行转置的矩阵的列数(2~20) : column = ");
 scanf("%d",&column);

 //函数调用及主功能实现
 printf("请输入一个 %d X %d 的矩阵 \n" , row , column);
 inputMatrix(a, row , column);
 matrixTransport(a, b, row , column);
 printf("转置后的矩阵是 :\n");
 outputMatrix(b, column , row);

 getchar();
 return 0;
}