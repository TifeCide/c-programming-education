#include<stdio.h>
#include<string.h>
void fun(char str[], int *pUpper, int *pLower, int *pNum)
{
	/*********Begin*********/
    for(int i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            (*pUpper)++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z'){
            (*pLower)++;
        }
        else{
            (*pNum)++;
        }
    }

   /*********End**********/
}
int main()
{
	char sentence[80];
	int upper = 0,lower = 0,num = 0;
	scanf("%s",sentence);
	/*********Begin*********/
	//调用函数
    fun(sentence, &upper, &lower, &num);
   /*********End**********/
	printf("%d\n%d\n%d\n",upper,lower,num);
	return 0;
}