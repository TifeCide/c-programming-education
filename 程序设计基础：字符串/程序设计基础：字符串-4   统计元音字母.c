#include  <stdio.h>
#include  <string.h>
int main()
{	
	char str[100];
    fgets(str,100,stdin);
    //****补全代码****
    int strLong = strlen(str);
    int a=0,e=0,ix=0,o=0,u=0;
    for(int i =0; i<strLong; i++){
        char c=str[i];
        if(c =='a'||c =='A'){
            a++;
        }
        else if(c =='e'||c =='E'){
            e++;
        }
        else if(c =='i'||c =='I'){
            ix++;
        }
        else if(c =='o'||c =='O'){
            o++;
        }
        else if(c =='u'||c =='U'){
            u++;
        }
    }
    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,ix,o,u);
    return 0;
}