#include <stdio.h>
// 函数声明：传入数组和长度
void NumSort(int a[], int n);

int main(void) {
    int a[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    NumSort(a, 10);

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

// 排序函数
void NumSort(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {  // 从大到小排序
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
