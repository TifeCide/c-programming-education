#include  <stdio.h>
#include  <math.h>
int main()
{	
    //****补全代码****
    int x1,y1,x2,y2,Lx;
    scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
        Lx=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    printf("%.2f",sqrt(Lx));
    return 0;
}