#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Ū�J��� n

    for (int i = 1; i <= n; i++) {
        // �C�C�L�X i ���P�P
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // ����
    }

    return 0;
}
