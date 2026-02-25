#include <stdio.h>

void solve(int n) {
    long double s = 1.0; // 第一项
    long double A = 1.0; // 分子累乘
    long double B = 3.0; // 分母累乘（第2项开始是3）

    // 第1项是 1，已经加过，从第2项开始计算
    for(int k = 1; k <= n; k++){
        if(k == 1){
            s += 1.0 / 3.0;
        } else {
            A *= k;          // 1*2*...*k
            B *= (2*k + 1);  // 3*5*...*(2k+1)
            s += A / B;
        }
    }

    printf("%.10Lf\n", s); // 高精度输出
}

int main() {
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}