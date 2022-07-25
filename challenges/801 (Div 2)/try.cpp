#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ordered_set                                     \
  tree<int, null_type, greater_equal<int>, rb_tree_tag, \
       tree_order_statistics_node_update>
#define ll long long int
#define ld long double
#define nl "\n"
#define pb push_back
#define ppb pop_back
#define in insert
#define lb lower_bound
#define ub upper_bound
#define mod 1000000007
#define uo cout << "YES\n"
#define no cout << "NO\n"
#define vv vector<vector<ll>>
#define vvi vector<vector<int>>
#define v vector<ll>
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define tt         \
  int TESTCASE;    \
  cin >> TESTCASE; \
  while (TESTCASE--)
#define f(i, a, b) for (ll i = (a); i <= (b); i++)
#define fr(j, a, b) for (ll j = (a); i >= (b); i--)

// alse include seive  and prime factorizaton
vector<ll> sieve(ll n) {
  vector<bool> is_prime(n + 1, true);
  is_prime[0] = is_prime[1] = false;
  for (ll i = 2; i <= n; i++) {
    if (is_prime[i] && i * i <= n) {
      for (ll j = i * i; j <= n; j += i) is_prime[j] = false;
    }
  }
  vector<ll> res;
  for (ll i = 2; i <= n; i++) {
    if (is_prime[i]) res.pb(i);
  }
  return res;
}

vector<ll> primefactor(ll n) {
  vector<ll> prime;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      prime.pb(i);
      while (n % i == 0) n /= i;
    }
  }
  if (n > 1) prime.pb(n);
  return prime;
}

void print(v &vect, ll len) {
  f(i, 0, len - 1) cout << vect[i] << " ";
  cout << nl;
}
void input(v &vect, ll n) { f(i, 0, n - 1) cin >> vect[i]; }
void inputg(vector<vector<int>> &graph, int n) {
  f(i, 1, n - 1) {
    int a, b;
    cin >> a >> b;
    graph[a].pb(b);
    graph[b].pb(a);
  }
}
// Finding a power b.. without taking % mod1
ll power(ll a, ll b) {
  ll ans = 1;
  while (b) {
    if (b & 1) {
      ans = a * ans;
    }
    b >>= 1;
    a = a * a;
  }
  return ans;
}
// taking with mod
ll expo(ll a, ll b, ll mo) {
  ll res = 1;
  while (b > 0) {
    if (b & 1) res = (res * a) % mo;
    a = (a * a) % mo;
    b = b >> 1;
  }
  return res;
}
// Taking b as divisor and a as dividend
ll find_gcd(ll a, ll b) {
  if (b == 0) return a;
  return find_gcd(b, a % b);
}
// Taking %mod
ll fact(ll ele) {
  ll temp = 1;
  f(i, 1, ele) { temp = (temp * i) % mod; }
  return temp;
}

ll mod_add(ll a, ll b, ll m) {
  a = a % m;
  b = b % m;
  return (((a + b) % m) + m) % m;
}
ll mod_mul(ll a, ll b, ll m) {
  a = a % m;
  b = b % m;
  return (((a * b) % m) + m) % m;
}
ll mod_sub(ll a, ll b, ll m) {
  a = a % m;
  b = b % m;
  return (((a - b) % m) + m) % m;
}
ll mod_div(ll a, ll b, ll m) {
  a = a % m;
  b = b % m;
  return (mod_mul(a, expo(b, m - 2, m), m) + m) % m;
}  // only for prime m
//--------------------------------**************--------------------------------------------///
// observe when your answer lie in a range then think about  BINARY SEARCH  or
// if ur greedy method fail then also think about binary search ..  :)
ll ans = 0;
ll dfs(vvi &vect, int parent, int root, ll target, v &value) {
  // xor_value^= value[root] ;
  int xor_value = 0;
  for (int &ig : vect[root]) {
    if (parent != ig) {
      xor_value ^= dfs(vect, root, ig, target, value);
    }
  }

  xor_value ^= value[root];
  if (xor_value == target) ans++, xor_value = 0;

  return xor_value;
}

void solve() {
  int n, k;
  cin >> n >> k;
  v value(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> value[i];
  }

  vvi vect(n + 1, vector<int>());
  inputg(vect, n);

  ll xor_val = 0;
  f(i, 1, n) xor_val ^= value[i];

  if (xor_val == 0) {
    uo;
    return;
  } else if (xor_val != 0 && k == 2) {
    no;
    return;
  }

  // cout << xor_val<<nl;
  dfs(vect, 0, 1, xor_val, value);

  if (ans & 1 && ans != 1)
    uo;
  else
    no;

  ans = 0;

  return;
}

/*------------------------------------- IT'S MY WORLD :))
 * -----------------------------------------*/
int main() {
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  tt { solve(); }
  return 0;
}