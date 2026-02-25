#include  <stdio.h>
#include  <string.h>
int main()
{	
    //****补全代码****
    //请用scanf读入字符串
    int n;
    scanf("%d",&n);

    char arr[20][101];
    for (int i = 0; i < n; i++){
        scanf("%s", arr[i]);
    }
    
    for(int i = 0; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if(strcmp(arr[j], arr[j+1]) > 0){
                char temp[101];
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);

            }
        }
    }

    for(int i =0; i<n; i++){
        printf("%s\n",arr[i]);    
    }
    return 0;
}