class Solution {
public:
    int minOperations(vector<int>& nums) {
         int n = nums.size();
        int operations = 0;

        for (int i = 0; i <= n - 3; i++) {
            if (nums[i] == 0) {
                // Flip nums[i], nums[i+1], and nums[i+2]
                nums[i] ^= 1;
                nums[i+1] ^= 1;
                nums[i+2] ^= 1;
                operations++;
            }
        }

        // Check if the last two elements are 0, which means it's impossible
        if (nums[n-2] == 0 || nums[n-1] == 0) {
            return -1;
        }

        return operations;
    }
};
