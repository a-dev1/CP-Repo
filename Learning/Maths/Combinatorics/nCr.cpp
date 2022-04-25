#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAX_N = 1e6;
const ll mod = 1e9 + 7;

ll fact[MAX_N];
ll power(ll a, ll b);
// Using Fermit's Theorem
ll inverse(ll a) { return power(a, mod - 2); }
ll modA(ll a, ll b) { return ((a % mod) + (b % mod)) % mod; }
ll modM(ll a, ll b) { return ((a % mod) * (b % mod)) % mod; }
ll modS(ll a, ll b) { return ((a % mod) - (b % mod)) % mod; }
ll modD(ll a, ll b) { return ((a % mod) * (inverse(b) % mod)) % mod; }
ll power(ll a, ll b) {
  ll ans = 1, temp = a;
  while (b) {
    if (b & 1) ans = modM(ans, temp);
    b >>= 1;
    temp = modM(temp, temp);
  }
  return ans;
}

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
  cout << nCr(10, 5);
  return 0;
}