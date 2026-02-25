#include  <stdio.h>
int main()
{	
    //****补全代码****
    double a,b;
    scanf("%lf%lf", &a, &b);
    printf("%.2f %.2f", a*b/(a+b),a+b);
    return 0;
}