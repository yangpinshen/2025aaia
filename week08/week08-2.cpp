#include <stdio.h>

int main()
{
    int a[100];

    // ��J100�Ӿ��
    for(int i = 0; i < 100; i++)
        scanf("%d", &a[i]);

    // �_�w�ƧǡG�q�p��j
    for(int k = 0; k < 99; k++)
        for(int i = 0; i < 99; i++)
            if(a[i] > a[i + 1])
            {
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }

    // ��X�Ƨǫ᪺�}�C
    for(int i = 0; i < 100; i++)
        printf("%d ", a[i]);

    return 0;
}
