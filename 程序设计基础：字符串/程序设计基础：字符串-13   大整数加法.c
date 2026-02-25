#include <stdio.h>
#include <string.h>

int main()
{	
    char s1[100], s2[100];    
    char result[101];

    scanf("%99s", s1);   // 【改】防止溢出
    scanf("%99s", s2);   // 【改】防止溢出

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // 确保 s1 是较长的那个
    if (len2 > len1) {
        char temp[100];
        strcpy(temp, s1);
        strcpy(s1, s2);
        strcpy(s2, temp);

        int t = len1;
        len1 = len2;
        len2 = t;
    }

    // 【改】把 s2 前面补 '0'，避免未初始化内存
    int diff = len1 - len2;
    for (int i = len2 - 1; i >= 0; i--) {
        s2[i + diff] = s2[i];
    }
    for (int i = 0; i < diff; i++) {
        s2[i] = '0';
    }
    s2[len1] = '\0';   // 【改】补字符串结束符

    // 逐位相加
    int flag = 0;
    for (int i = len1 - 1; i >= 0; i--) {
        int sum = (s1[i] - '0') + (s2[i] - '0') + flag;
        result[i] = (sum % 10) + '0';   // 【改】数字 → 字符
        flag = sum / 10;
    }

    result[len1] = '\0';  // 【改】结束符

    // 输出
    if (flag == 1) {
        printf("1");
    }
    printf("%s", result);

    return 0;
}
