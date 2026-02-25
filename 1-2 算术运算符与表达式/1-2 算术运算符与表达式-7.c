#include <iostream>
using namespace std;
int main()
{
    /********** Begin *********/
    int a,b;
	scanf("%d%d",&a,&b);
    printf("%.0f",b*b+a*a-a*(b+a)*0.5-b*b*0.5);
    
    /********** End **********/
    return 0;
}