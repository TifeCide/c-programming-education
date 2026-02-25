#include <stdio.h>
int main(){
   /*********begin *******/
   int score[100];

    int n;
    while(1){
        scanf("%d",&n);
		if(n==0) break;
            for(int i=0; i<n; i++){
                scanf("%d",&score[i]);
            }

			int total=0;
			for(int i=0; i<n; i++){
				total += score[i];
			}

			int min=score[0];
			for(int i=1; i<n; i++){
				if(score[i] < min){
					min=score[i];
				}
			}

			int max=score[0];
			for(int i=1; i<n; i++){
				if(score[i] > max){
					max=score[i];
				}
			}
			total -= min;
			total -= max;

			printf("%.2f\n",(float)total/(n-2));
    }


    /*********end *******/
    return 0;
}