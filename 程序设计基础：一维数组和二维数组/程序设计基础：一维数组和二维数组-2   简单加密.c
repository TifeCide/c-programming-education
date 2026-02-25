#include <stdio.h>
int main(void)
{
    /*********Begin*********/
    int num;
    scanf("%d", &num);// 输入四位数

    int a[4];
    // 拆分每位数字
    for (int i = 3; i >= 0; i--) {
        a[i] = num % 10;
        num /= 10;
    }

    // 每位数字加5再取余
    for (int i = 0; i < 4; i++) {
        a[i] = (a[i] + 5) % 10;
    }

    // 交换
    int temp;
    temp = a[0]; a[0] = a[3]; a[3] = temp;
    temp = a[1]; a[1] = a[2]; a[2] = temp;

    // 加密后
    for (int i = 0; i < 4; i++) {
        printf("%d", a[i]);
    }
    /*********End**********/
    return 0;
}