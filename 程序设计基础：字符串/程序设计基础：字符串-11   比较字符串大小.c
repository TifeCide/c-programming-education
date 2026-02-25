#include  <stdio.h>
#include  <string.h>
int main()
{	
    char s1[100], s2[100];    
    scanf("%s",s1); // 读入第一行字符串
    scanf("%s",s2); // 读入第二行字符串
    //****补全代码****
    int result = strcmp(s1,s2);
    if(result < 0){
        printf("<");
    }
    else if (result > 0){
        printf(">");
    }
    else
        printf("=");


    return 0;
}