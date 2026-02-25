#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int OP,a,b,COUNTER=0,score=0,asw;//定义运算法则，数字a，数字b，分数，回答
	char Retry;//定义继续做题
	int GrpN=1;//初始化题组数
	srand(time(NULL));
    
 do{
 	printf("The Group %d \n",GrpN);//输出当前题组数
	do{
        //随机生成a，b
		OP=rand()%4;
		a=rand()%100+1;
		b=rand()%100+1;
		
		switch (OP){
		//加法计算题
        	case 0:
			printf("%d + %d =",a,b);
			COUNTER ++;
			scanf("%d",&asw);
			if (asw == a+b)//panduan
				score +=10;
			break;
		
        //减法计算题		
			case 1:
			COUNTER ++;

			if(a<b){
				int temp;//交换a，b。避免负数
				temp = a;
				a = b;
				b = temp;
				printf("%d - %d =",a,b);
				scanf("%d",&asw);
				if(asw == a-b)//判断
					score += 10;	
			}
			else {
				printf("%d - %d =",a,b);
				scanf("%d",&asw);
				if(asw == a-b)//判断
					score += 10;				
			}
				break;
                
            //乘法计算题    
			case 2:
			COUNTER ++;
			printf("%d * %d =",a,b);
				scanf("%d",&asw);
				if(asw == a*b)//判断
					score += 10;
				break;
			
            //除法计算题	
			case 3:
			COUNTER ++;
				//确认是整除运算
				while(a%b != 0||a==b){
				a=rand()%100+1;
				b=rand()%100+1;	
				}
				
				printf("%d / %d =",a,b);
					scanf("%d",&asw);			
					if(asw == a/b)//判断
						score += 10;
				break;
			}		
		
	}while (COUNTER < 10);//当题数小于10时继续生成	
	printf("Total Score: %d\n",score);//输出当前总分
	printf("Continue? (y/n)\n");//询问是否继续
	scanf(" %c",&Retry);
	GrpN++;//增加组号
	COUNTER=0;//重置题目计数器
    system("cls");//清屏
 }while (Retry=='y'); 

	GrpN--;//减少多加的一组
	
 	float avg;//定义平均分变量
	avg=score*1.0/GrpN;//计算平均分
 	printf("Total Score: %.2f / 100 \n",avg);//以百分制算分


 	//评价系统
 	if(avg >= 90)
 		printf("Great\n");//当总回答正确率大于等于90%
 	else if(avg >= 80)
 		printf("Good\n");//当总回答正确率大于等于80%
 	else if(avg >= 70)
 		printf("Fine\n");//当总回答正确率大于等于70%
 	else if(avg >= 60)
 		printf("OK\n");//当总回答正确率大于等于60%
 	else 
 		printf("Bad\n");//当总回答正确率低于60%
	
		system("pause");
		return 0;

}

