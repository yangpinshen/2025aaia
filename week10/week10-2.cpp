/// week10-2.cpp �n�ƤH�a�u��֪k�v
#include <stdio.h>

int main() {
    printf("�п�J1�Ӿ�ơG");
    int n;
    scanf("%d", &n);  // ex. ��J 397

    /*
    // �H�U�o�ǬO�B�~���խӦ�ơB�Q��ơB�ʦ�ƪ��覡�G
    // printf("�Ӧ�ƬO: %d\n", n % 10);
    // printf("�Q��ƬO: %d\n", n / 10 % 10);
    // printf("�ʦ�ƬO: %d\n", n / 100 % 10);
    */

    // ��֪k�]�v��ƦC�X�C�@��A�q�k�쥪�^
    while (n > 0) {  // �p�G�٦��Ѿl�Ʀr
        printf("�Ʀr�O %d ��ֱo��G%d\n", n, n % 10);  // ���X�Ӧ��
        n = n / 10;  // �h���鱼�����@��
    }

    return 0;
}
