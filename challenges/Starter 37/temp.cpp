//****************************Template Begins****************************//

// Header Files
#include <math.h>
#include <stdio.h>

#include <algorithm>
#include <bitset>
#include <chrono>
#include <complex>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include "ext/pb_ds/assoc_container.hpp"
#include "ext/pb_ds/tree_policy.hpp"
// Header Files End

using namespace std;
using namespace __gnu_pbds;
template <class T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class key, class value, class cmp = std::less<key>>
using ordered_map =
    tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
// find_by_order(k)  returns iterator to kth element starting from 0;
// order_of_key(k) returns count of elements strictly smaller than k;

#define code_brains                 \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
#define ll long long
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define fo(i, a, b) for (i = a; i <= b; i++)
#define all(v) (v).begin(), (v).end()
#define all1(v) (v).begin() + 1, (v).end()
#define allr(v) (v).rbegin(), (v).rend()
#define allr1(v) (v).rbegin() + 1, (v).rend()
#define sort0(v) sort(all(v))
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
#define sz(x) (ll) x.size()
#define pb push_back
#define ppb pop_back
#define mkp make_pair
#define inf 1000000000000000005
const ll mod = 1e9 + 7;

ll inv(ll i) {
  if (i == 1) return 1;
  return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;
}

ll mod_mul(ll a, ll b) {
  a = a % mod;
  b = b % mod;
  return (((a * b) % mod) + mod) % mod;
}

ll mod_add(ll a, ll b) {
  a = a % mod;
  b = b % mod;
  return (((a + b) % mod) + mod) % mod;
}

ll gcd(ll a, ll b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : a / b + 1; }

ll pwr(ll a, ll b) {
  a %= mod;
  ll res = 1;
  while (b > 0) {
    if (b & 1) res = res * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return res;
}
//****************************Template Ends*******************************//

int main() {
  code_brains;
  ll t, n, i, j, ans, temp, sum, m, q;
  string sans;
  t = 1;
  // cin >> t;
  while (t--) {
    sans = "NO";
    ans = temp = sum = 0;
    cin >> n >> m >> q;
    vector<vll> a(n + 5, vll(m + 5, 0));
    ll tot = 0;
    fo(i, 1, n) {
      string s;
      cin >> s;
      fo(j, 1, m) {
        if (s[j - 1] == '*') {
          a[i][j] = 1;
          tot++;
        }
      }
    }
    vector<vll> psum(n + 5, vll(m + 5, 0));
    fo(j, 1, m) {
      fo(i, 1, n) { psum[i][j] = psum[i - 1][j] + a[i][j]; }
    }
    ll iter;
    fo(iter, 1, q) {
      ll x, y;
      cin >> x >> y;
      if (a[x][y] == 1) {
        a[x][y] = 0;
        tot--;
      } else {
        a[x][y] = 1;
        tot++;
      }
      fo(i, x, n) { psum[i][y] = psum[i - 1][y] + a[i][y]; }

      ll rem, div;
      div = tot / n;
      rem = tot % n;
      ans = 0;
      fo(i, 1, div) { ans += psum[n][i]; }
      ans += psum[rem][div + 1];
      ans = tot - ans;
      cout << ans << "\n";
    }
  }
  return 0;
}
