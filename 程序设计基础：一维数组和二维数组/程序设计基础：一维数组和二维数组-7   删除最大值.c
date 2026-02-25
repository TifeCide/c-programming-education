#include<stdio.h>
int main(void)
{
    /*********Begin*********/
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }

    int maxNum = 0;
    for(int i=0; i<10; i++){
        if(arr[i] > arr[maxNum]){
            maxNum = i;
        }
    }

    for(int i=maxNum; i<9; i++){
        arr[i] = arr[i+1];
    }
    for(int i=0; i<9; i++){
        printf("%d ", arr[i]);
    }
    /*********End**********/
    return 0;
}