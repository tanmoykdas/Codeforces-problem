#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n; cin >> n;
  string a, b; cin >> a >> b;

  for (int i = 0; i < n / 2; i++) {
    if (a[i] != '(') swap(a[i], b[i]);
    if (a[n - i - 1] != ')') swap(a[n - i - 1], b[n - i - 1]);
  }

  bool f = true; int c = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == '(') c++;
    else c--;

    if (c < 0) {
      f = false; break;
    }
  }
  if (c) f = false;
  c = 0;
  for (int i = 0; i < n; i++) {
    if (b[i] == '(') c++;
    else c--;

    if (c < 0) {
      f = false; break;
    }
  }
  if (c) f = false;

  cout << (f ? "YES\n" : "NO\n");
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}