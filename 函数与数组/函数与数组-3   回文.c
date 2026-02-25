#include<stdio.h>
#include<string.h>
#define SIZE 100

int isPalindrome(char arr[],int len);

int main()
{
	/**** 输入字符串,调用函数isPalindrome判断是否为回文串，然后输出结果 *******/ 
    /**********  Begin ***********/
    char arr[SIZE];
    scanf("%s",arr);
    int len=strlen(arr);
    int result = isPalindrome(arr,len); 
    if(result == 0){
        printf("No");
    }
    else
        printf("Yes");

	/**********  End  **********/
	return 0;
}

/**** 在下面编写满足任务要求的递归函数isPalindrome，是回文返回1，不是返回0 *******/ 
/**********  Begin ***********/
int isPalindrome(char arr[],int len){
    int left=0,right=len-1;
    
    while(left < right)
    {
        if(arr[left] != arr[right]){
            return 0;
        }

        left++;
        right--;
    }
    return 1;
}
/**********  End  **********/
