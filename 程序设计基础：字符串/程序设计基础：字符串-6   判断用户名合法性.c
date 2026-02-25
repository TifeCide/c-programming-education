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

  if(len < 4 || len > 20){
    printf("no");
    return 0;
  }

  for(int i=0;i<len;i++){
    if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9') || str[i]=='_')){
      printf("no");
      return 0;
    }

  }
  printf("yes");


return 0;
}