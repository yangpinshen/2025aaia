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

    sort(a.begin(), a.end()); // �ץ����r�Gbogin -> begin�Acnd -> end

    for (int i = 0; i < 100; i++) {
        printf("%d ", a[i]); // �[�W�Ů�A����X��M��
    }

    return 0;
}
