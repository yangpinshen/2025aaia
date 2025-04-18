#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> a(100);

    for (int i = 0; i < 100; i++) {
        scanf("%d", &a[i]);
    }

    sort(a.begin(), a.end()); // 修正錯字：bogin -> begin，cnd -> end

    for (int i = 0; i < 100; i++) {
        printf("%d ", a[i]); // 加上空格，讓輸出更清楚
    }

    return 0;
}
