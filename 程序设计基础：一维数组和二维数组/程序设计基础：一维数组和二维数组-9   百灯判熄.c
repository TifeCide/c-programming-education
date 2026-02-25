#include <stdio.h>
int main()
{
	/************Begin************/
    int light[100];
	for(int i = 0; i < 100; i++){
		//初始化所有灯泡为开启状态
		light[i]= 1;
	}

	//控制当前j的倍数的灯泡状态
    for(int j = 1; j <= 100; j++){
		//遍历整个数组
		for(int i = 0; i<100; i++){
			if((i+1)%j == 0){
				light[i]=!light[i];
			}
		}
	}

	//输出所有关闭的灯泡编号
	int cnt = 0;
	printf("熄灭状态的灯的编号是：\n");
	for(int i = 0; i < 100; i++){
		if(light[i] == 0){
			printf("%4d",i+1);
			cnt++;
		}
        if(i == 99){
			printf("\n");

        }
	}
	printf("共有%d盏灯是灭的\n",cnt);
		
	return 0;
	/************End************/
}
