#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int arr[10][10];
    for(int i=0; i<10; i++){
            arr[i][0] = 1;
            arr[i][i] = 1;
        for(int j=1; j<i; j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<=i; j++){
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    
    /*********End**********/
    return 0;
}