#include <stdio.h>

// 编写函数
long long jiechen(int n) {
    long long sum = 0;
    long long fact = 1;   // 用来保存阶乘

    for (int i = 1; i <= n; i++) {
        fact *= i;        // 迭代计算 i!
        sum += fact;      // 累加到总和
    }
    return sum;
}

int main(void) {  
    int n;
    scanf("%d", &n);
    long long result = jiechen(n);
    printf("%lld\n", result);
    return 0;
}
