#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  ll n, a, b; cin >> n >> a >> b;

  ll one = n * a;
  ll two = (n / 3) * b;
  two += ((n - ((n / 3) * 3)) * a);
  ll three = (n / 3) * b;
  if (n % 3) three += b;
  
//   cout << one << " " << two << " " << three;
  cout << min(one, min(two, three)) << endl;
}

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

  ll tt;
  cin >> tt;
  while(tt--) solve();
  return 0;
}