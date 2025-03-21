// week05-3.cpp
// LeetCode 2206: Divide Array Into Equal Pairs
# include <vector>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int a[501] = {0};  // 记录数字出现次数的数组，假设 nums 里的数字范围是 1~500

        // 统计每个数字出现的次数
        for (int i = 0; i < nums.size(); i++) {
            int now = nums[i];  // 取出当前数字
            a[now]++;  // 记录出现次数
        }

        // 检查所有数字出现的次数是否都是偶数
        for (int i = 1; i <= 500; i++) {
            if (a[i] % 2 == 1) return false;  // 发现有奇数次出现的数字，返回 false
        }

        return true;  // 所有数字出现次数都是偶数，可以划分成对
    }
};
