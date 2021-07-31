
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, a[100];
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] /= 2;
            ans++;
        }
        else {
            a[i] = a[i] / 2 + 1;
            ans++;
        }
        if (ans > k)
            break;
    }
    cout << ans;
    return 0;
}
