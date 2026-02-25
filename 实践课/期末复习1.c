#include <stdio.h>
#include <stdlib.h>
int main(){
   /*********begin *******/
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n){
        int temp = 0;
            temp = n%10;
            n = n/10; 
            ans= temp + ans*10;
    }

    printf("%d\n",ans);
    system("pause");
    /*********end *******/
    return 0;
}