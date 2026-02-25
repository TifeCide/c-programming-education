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

    for(int i=0;i<len;i++){
        printf("%c",str[i]);
        if((len-i-1)%3 ==  0 && i!=len-1){
          printf(",");
        }
      
    }    
    return 0;
}