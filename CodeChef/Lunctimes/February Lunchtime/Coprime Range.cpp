#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

bool check(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

signed main() {
	fastio;
	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		r++;
		while (!check(r)) {
			r++;
		}
		cout << r << '\n';
	}
	return 0;
}
