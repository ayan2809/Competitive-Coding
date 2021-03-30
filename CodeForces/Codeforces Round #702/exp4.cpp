#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

const long long N= 1e12;

unordered_set<ll> cubes;

void precalc() {
  for (ll i = 1; i * i * i <= N; i++) {
    cubes.insert(i * i * i);
  }
}

void solve() {
  ll x;
  cin >> x;
  for (ll i = 1; i * i * i <= x; i++) {
    if (cubes.count(x - i * i * i)) {
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main() {
  precalc();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
