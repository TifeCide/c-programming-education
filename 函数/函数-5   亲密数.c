#include<stdio.h>
void solve(){
    /*********Begin*********/
        //递归计算
        for(int i=1; i<=3000; i++){
            int AdeYZH=0;
            for(int j=1; j<=(i/2); j++){
                if(i%j == 0){
                    AdeYZH += j;
                }
            }

            int BdeYZH=0;
            for(int j=1; j<=(AdeYZH/2); j++){
                if(AdeYZH % j == 0){
                     BdeYZH += j;
                }
            }

            if(BdeYZH == i && AdeYZH != BdeYZH && i < AdeYZH){
                printf("(%d,%d)",i,AdeYZH);
            }

        }
    /*********End**********/ 
}
int main(void)
{  
    solve();
    return 0;
}
