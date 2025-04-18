#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // 讀入整數 n

    for (int i = 1; i <= n; i++) {
        // 每列印出 i 顆星星
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // 換行
    }

    return 0;
}
