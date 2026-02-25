#include  <stdio.h>
#include  <string.h>
int main()
{	
	char str[100];
    scanf("%s",str);
    //****补全代码****
    int charLong = strlen(str);
    int count=0;

    for(int i=0; i<charLong; i++){
        if(str[i]%2 == 1)
        count++;
    }
    printf("%d",count);
    return 0;
}