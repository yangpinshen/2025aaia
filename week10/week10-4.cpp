class Solution {
public:
    int countLargestGroup(int n) {
        int a[100] = {};  // 计㎝程ぃ穦禬筁 9+9+9+9 = 36100 荡癸镑ノ
        int largest = 0;

        for (int i = 1; i <= n; i++) {
            int now = i, total = 0;

            while (now > 0) {
                total += now % 10;
                now /= 10;
            }

            a[total]++;

            if (a[total] > largest) {
                largest = a[total];  // 癘ヘ玡程竤舱
            }
        }

        int ans = 0;
        for (int i = 0; i < 100; i++) {
            if (a[i] == largest) {
                ans++;  // 参璸Τぶ竤舱单程
            }
        }

        return ans;
    }
};
