#include <stdio.h>
void carSort(long car[]);  //排序函数
int main()
{
    int i;
    long car[10];
        printf("输入2019年汽车销量：\n");
    for (i = 0; i < 10; i++)
    {
        printf("car[%d]=", i);
        scanf("%ld", &car[i]);
    }
    /*********begin *******/
    //调用排序函数
    carSort(car);

    /*********end *******/
    printf("2019年汽车销量排名如下：\n");
    for (i = 0; i < 10; i++) {
        printf("%ld\t", car[i]);
        if (i == 4)
            printf("\n");
    }
    return 0;
}
/*********begin *******/
//定义排序函数
void carSort(long car[]){
    for(int j=0;j<9;j++){
        for(int i=0;i<9;i++){
            int temp;
            if(car[i]<car[i+1]){
                temp=car[i];
                car[i]=car[i+1];
                car[i+1]=temp;
            }
        } 
    }
   
}


/*********end *******/