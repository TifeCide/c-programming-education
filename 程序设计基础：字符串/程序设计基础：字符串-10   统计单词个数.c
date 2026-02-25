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

    for(int i = 0;i<len;i++){
        if(!((str[i] >= 'a' && str[i] <='z')||(str[i] >= 'A' && str[i] <='Z'))){
            str[i]=' ';
        }
    }
    int cnt=0;
    for(int i = 0;i<len;i++){
        if(i > 0){
            if(str[i] == ' ' && (str[i-1] >= 'a' && str[i-1] <='z')||(str[i-1] > 'A' && str[i-1] <='Z')){
                cnt++;
            }
        }
    }
    if((str[len] >= 'a' && str[len] <='z')||(str[len] >= 'A' && str[len] <='Z')){
        cnt++;
    }
    printf("%d",cnt);
    

    return 0;
}