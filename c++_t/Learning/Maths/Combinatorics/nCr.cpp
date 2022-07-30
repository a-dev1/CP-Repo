#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX_N = 1e6;
const ll mod = 1e9 + 7;

ll fact[MAX_N];
ll power(ll b, ll p);
// Using Fermit's Theorem
ll inverse(ll a) { return power(a, mod - 2); }
ll modA(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; }
ll modM(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll modS(ll a, ll b) { return ((a % mod) - (b % mod)) % mod; }
ll modD(ll a, ll b) { return ((a % mod) * (inverse(b) % mod)) % mod; }

ll power(ll b, ll p) {
  ll res = 1, temp = b;
  while (p) {
    if (p & 1) res = modM(res, temp);
    p >>= 1;
    temp = modM(temp, temp);
  }
  return res;
}

// ll power(ll b, ll p) {
//   if (p == 0) return 1;
//   ll ans = power(b, p / 2);
//   ans = modM(ans , ans);
//   ans = modM(ans, (p % 2 == 1 ? b : 1));
//   return ans;
// }
// L-() and how?
// ll inverse(ll a) { return power(a, mod - 2); }

void calculate_factorial() {
  fact[0] = 1;
  for (int i = 1; i < MAX_N; i++) {
    fact[i] = modM(fact[i - 1], i);
  }
}

ll nCr(ll n, ll r) {
  if (n < 0 || r < 0 || r > n) return 0;

  ll bottom = modM(inverse(fact[r]), inverse(fact[n - r]) % mod);
  return modM(fact[n], bottom);
}

int main() {
  calculate_factorial();
  // cout << nCr(10, 5);
  cout << power(2, 5);
  return 0;
}