#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;

const int N = 1000 + 10;
int mod = 1e9 + 7;

ll tv(ll x, ll y) {
  if (!y) return 1;
  ll ans = tv(x, y / 2);
  ans *= ans;
  ans %= mod;
  if (y & 1) ans *= x;
  return ans % mod;
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll n, m;
  cin >> n >> m;
  vector<ll> pr;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      pr.PB(i);
      while (n % i == 0) n /= i;
    }
  }
  if (n != 1) pr.PB(n);
  ll ans = 1;
  for (auto u : pr) {
    ll sum = 0;
    ll x = m / u;
    while (x) {
      sum += x;
      x /= u;
    }
    // cout << "sum:" << sum << endl;
    ans *= tv(u, sum);
    ans %= mod;
  }
  cout << ans << endl;
}