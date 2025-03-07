//week03-1.cpp
// leecode 2579 count total number of colored cells
class Solution {
public:
    long long coloredCells(int n) {
        long long ans = n;
        return ans*ans + (ans-1)*(ans-1);
    }
};
