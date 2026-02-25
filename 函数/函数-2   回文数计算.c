#include<stdio.h>
void solve(){
    /*********Begin*********/
    for(int n=200;n<=3000;n++){
        int x=n,rev=0;
        while(x){
            rev = rev*10 + x%10;
            x /= 10;
        }
        if(rev==n){
            printf("%d\n",n);
        }
    }
    /*********End**********/ 
}
int main(void)
{  
   solve();
   return 0;
}
