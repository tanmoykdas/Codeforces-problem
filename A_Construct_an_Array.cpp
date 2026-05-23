#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi  = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;

// Common constants
const int INF  = 0x3f3f3f3f;
const ll  LINF = 0x3f3f3f3f3f3f3f3fLL;
const ll  MOD  = 1e9 + 7;
const ld  PI   = acosl(-1.0L);
const int MAXN = 2e5 + 5;

// Shorthand macros
#define all(x)   (x).begin(), (x).end()
#define rall(x)  (x).rbegin(), (x).rend()
#define sz(x)    (int)(x).size()
#define pb       push_back
#define eb       emplace_back
#define fi       first
#define se       second
#define yes      cout << "YES\n"
#define no       cout << "NO\n"
#define nl     '\n'

// Debug — prints variable name and value to stderr
template<typename T>
ostream& operator<<(ostream& os, const vector<T>& v) {
    os << "[";
    for (int i = 0; i < sz(v); i++) { os << v[i]; if (i+1 < sz(v)) os << ", "; }
    return os << "]";
}
template<typename A, typename B>
ostream& operator<<(ostream& os, const pair<A,B>& p) { return os << "(" << p.fi << ", " << p.se << ")"; }
#define dbg(x)    cerr << #x << " = " << (x) << '\n'
#define dbg2(x,y) cerr << #x << " = " << (x) << "  |  " << #y << " = " << (y) << '\n'

// Fast I/O
inline void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Math utilities
ll gcd(ll a, ll b)       { return __gcd(a, b); }
ll lcm(ll a, ll b)       { return a / gcd(a, b) * b; }
ll power(ll base, ll exp, ll mod = MOD) {
    ll result = 1; base %= mod;
    for (; exp > 0; exp >>= 1) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
    }
    return result;
}
ll modinv(ll a, ll mod = MOD) { return power(a, mod - 2, mod); }

// Combinatorics — call precompute(N) once in main before using C(n,r)
vll fact, inv_fact;
void precompute(int n) {
    fact.resize(n + 1); inv_fact.resize(n + 1);
    fact[0] = 1;
    for (int i = 1; i <= n; i++) fact[i] = fact[i-1] * i % MOD;
    inv_fact[n] = modinv(fact[n]);
    for (int i = n - 1; i >= 0; i--) inv_fact[i] = inv_fact[i+1] * (i+1) % MOD;
}
ll C(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] % MOD * inv_fact[r] % MOD * inv_fact[n-r] % MOD;
}

// Sieve of Eratosthenes — is_prime[i] = true if i is prime, call sieve(N) once in main
vector<bool> is_prime;
vi primes;
void sieve(int n) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.pb(i);
            for (ll j = (ll)i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}

// Solution
void solve() {
    ll n; cin >> n;
    for (int i = 0; i < n; i++) cout <<  2 * i + 1 << " ";
    cout << nl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}

/*Stuff I should look for
    * int overflow, array bounds
    * special cases (n=1?)
    * do smth instead of nothing and stay organized
    * WRITE STUFF DOWN
    * DON'T GET STUCK ON ONE APPROACH
*/