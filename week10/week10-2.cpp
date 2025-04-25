/// week10-2.cpp 璶计產ブ猭
#include <stdio.h>

int main() {
    printf("叫块1俱计");
    int n;
    scanf("%d", &n);  // ex. 块 397

    /*
    // 硂ㄇ琌肂代刚计计κ计よΑ
    // printf("计琌: %d\n", n % 10);
    // printf("计琌: %d\n", n / 10 % 10);
    // printf("κ计琌: %d\n", n / 100 % 10);
    */

    // ブ猭硋计–眖オ
    while (n > 0) {  // 狦临Τ逞緇计
        printf("计琌 %d ブ眔%d\n", n, n % 10);  // 计
        n = n / 10;  // 奔奔ê
    }

    return 0;
}
