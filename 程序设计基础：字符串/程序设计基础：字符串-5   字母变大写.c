#include  <stdio.h>
#include  <string.h>
int main()
{	
	char str[100];
    fgets(str,100,stdin);
    //****补全代码****
    int strLong = strlen(str);

    for(int i =0; i<strLong; i++){
        char c=str[i];
            if(c >='a'&& c <='z'){
                c -= 32;
                str[i]=c;
                }
            }
    printf("%s",str);
    return 0;
}