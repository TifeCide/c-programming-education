#include  <stdio.h>
#include  <string.h>
int main()
{	
	char str[100];
    fgets(str,100,stdin);
    //****补全代码****
    int len;
    len=strlen(str);
    if(len >0 && str[len-1]=='\n'){
      str[len-1]='\0';
      len--;
    }
int left=0,right=len-1;
    while(left < right){

        if(str[left] != str[right]){
            printf("no");
            return 0;
        }
        left++;
        right--;
    }
    printf("yes");
    return 0;
}