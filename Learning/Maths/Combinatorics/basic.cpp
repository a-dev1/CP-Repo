#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll MAXN = 1e6;
const ll mod = 1e9 + 7;

ll fact[MAXN];

ll power(ll a, ll b) {
  if (b <= 0) return 1;
  if (b % 2 == 0)
    return (power(a, b / 2) * power(a, b / 2)) % mod;
  else
    return (((power(a, b / 2) * power(a, b / 2)) % mod) * a) % mod;
}

//L-() and how?
ll inverse(ll a) { return power(a, mod - 2); }

void calculate_factorial() {
  fact[0] = 1;
  for (int i = 1; i < MAXN; i++) {
    fact[i] = (fact[i - 1] * i) % mod;
  }
}

ll nCr(ll n, ll r) {
  if (n < 0 || r < 0 || r > n) return 0;

  return ((fact[n]) / (fact[r] * fact[n - r]) % mod) % mod;
}

int main() {
  calculate_factorial();
  cout << inverse(10);
  return 0;
}