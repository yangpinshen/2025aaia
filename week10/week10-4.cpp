class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};  // �Ʀ�M�̦h���|�W�L 9+9+9+9 = 36�A100 �������
        int largest = 0;

        for (int i = 1; i <= n; i++) {
            int now = i, total = 0;

            while (now > 0) {
                total += now % 10;
                now /= 10;
            }

            a[total]++;

            if (a[total] > largest) {
                largest = a[total];  // �O��ثe�̤j���s�դj�p
            }
        }

        int ans = 0;
        for (int i = 0; i < 100; i++) {
            if (a[i] == largest) {
                ans++;  // �έp���h�֭Ӹs�դj�p����̤j��
            }
        }

        return ans;
    }
};
