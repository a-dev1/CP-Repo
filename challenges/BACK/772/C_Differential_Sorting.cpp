#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define print(vect)                       \
  for (auto it : vect) cout << it << ' '; \
  cout << endl
#define print1(m) \
  for (auto it : mp) cout << it.F << ' ' << it.S << endl
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int M = 1e9 + 7;

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {
  if (b > a) {
    return gcd(b, a);
  }
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}
ll inv(ll i, ll m) {
  if (i == 1) return 1;
  return (m - ((m / i) * inv(m % i, m)) % m) % m;
}
ll mod(ll x, ll m) {
  return ((x % m + m) % m);
}  // Irrespective of x, whether it is +ve or -ve => we will get correct ans;
ll mod_add(ll a, ll b, ll m) { return mod((mod(a, m) + mod(b, m)), m); }
ll mod_sub(ll a, ll b, ll m) { return mod((mod(a, m) - mod(b, m)), m); }
ll mod_mul(ll a, ll b, ll m) { return mod((mod(a, m) * mod(b, m)), m); }
// mod_pow or expo
ll expo(ll a, ll b, ll m) {
  ll res = 1;
  while (b) {
    if (b & 1) {
      res = mod_mul(res, a, m);
    }
    a = mod_mul(a, a, m);
    b = b >> 1;
  }
  return res;
}
void swap(int &a, int &b) {
  a ^= b;
  b ^= a;
  a ^= b;
}
ll pwr(ll a, ll b, ll mod) {
  a %= mod;
  ll res = 1;
  while (b > 0) {
    if (b & 1) res = res * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return res;
}
bool pow_of_2(ll n) {
  if (n != 0 && (n & n - 1) == 0) return true;
  return false;
}
/*--------------------------------------------------------------------------------------------------------------------------*/

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (is_sorted(arr.begin(), arr.end())) {
    cout << 0 << endl;
    return;
  }

  if (arr[n - 2] > arr[n - 1]) {
    cout << -1 << endl;
    return;
  }

  if (arr[n - 2] - arr[n - 1] > arr[n - 2]) {
    cout << -1 << endl;
    return;
  }

  cout << n - 2 << endl;
  for (int i = n - 3; i >= 0; i--)
    cout << i + 1 << ' ' << n - 1 << ' ' << n << endl;
}

int main() {
  int T = 1;
  cin >> T;
  // cin.ignore(numeric_limits<streamsize>::max(), '\n');
  while (T--) {
    solve();
  }

  return 0;
}