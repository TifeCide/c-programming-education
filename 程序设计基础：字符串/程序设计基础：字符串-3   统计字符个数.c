#include  <stdio.h>
#include  <string.h>
int main()
{	
	char str[100];
    fgets(str,100,stdin);
    //****补全代码****
    int strLong = strlen(str);
    int NUMcount=0,Charcount=0,OTH=0;
    for(int i =0; i<strLong; i++){
        char c=str[i];
        if((c >='a'&& c <='z') || (c >='A'&& c <='Z')){
            Charcount++;
        }
        else if(c>= '0' && c <= '9'){
            NUMcount++;
        }
        else
            OTH++;
    }
    printf("%d %d %d",NUMcount,Charcount,OTH);
    return 0;
}