#include  <stdio.h>
#include  <string.h>
int main(){	
	char str[100];
    fgets(str,100,stdin);
    //****补全代码****
    int len;
    len=strlen(str);
    if(len >0 && str[len-1]=='\n'){
      str[len-1]='\0';
      len--;
    }

    if(len < 6 || len >100){
      printf("no");
      return 0;
    }

    for(int i=0;i<len;i++){
      if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9') || str[i]=='!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='-' || str[i]=='_')){
        printf("no");
        return 0;
      }
    }

    int typeCount=0,NUM=0,CHAR=0,SYM=0;
    //计算字符串种类数量
    for(int i=0;i<len;i++){
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            CHAR=1;
        }
        else if (str[i] >='0' && str[i] <='9'){
            NUM=1;
        }
        else if (str[i]== '!' || str[i]=='@' || str[i]=='#' || str[i]=='$' || str[i]=='%' || str[i]=='^' || str[i]=='&' || str[i]=='-'|| str[i]=='_'){
            SYM=1;
        }
    }

    typeCount=NUM+CHAR+SYM;
    if(typeCount >=2)
    {
        printf("yes");
        return 0;
    }
    else
    {
        printf("no");
        return 0;
    } 
    return 0;
    
}