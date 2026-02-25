#include <stdio.h>
#define MaxSize 100

int Array[MaxSize][MaxSize];

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &Array[i][j]);
        }
    }

    int found = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int candidate = Array[i][j];
            int isRowMax = 1;
            int isColMin = 1;

            // 判断是否是该行最大
            for (int col = 0; col < n; col++) {
                if (Array[i][col] > candidate) {
                    isRowMax = 0;
                    break;
                }
            }

            // 判断是否是该列最小
            for (int row = 0; row < m; row++) {
                if (Array[row][j] < candidate) {
                    isColMin = 0;
                    break;
                }
            }

            if (isRowMax && isColMin) {
                printf("Array[%d][%d]=%d\n", i, j, candidate);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("None\n");
    }

    return 0;
}
