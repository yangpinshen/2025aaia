#include <stdio.h>

int main()
{
    int a[100];

    // 輸入100個整數
    for(int i = 0; i < 100; i++)
        scanf("%d", &a[i]);

    // 冒泡排序：從小到大
    for(int k = 0; k < 99; k++)
        for(int i = 0; i < 99; i++)
            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }

    // 輸出排序後的陣列
    for(int i = 0; i < 100; i++)
        printf("%d ", a[i]);

    return 0;
}
