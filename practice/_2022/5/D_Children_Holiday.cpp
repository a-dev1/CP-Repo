#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double lld;

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
#define endl "\n"
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;

void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

///////////////////////////////////////////////////////////////
struct Test {
  ll t, z, y;
};

void printt(vector<Test> arr) {
  cerr << "[";
  for (auto i : arr) {
    cerr << " { " << i.t << ", " << i.z << ", " << i.y << " }";
  }
  cerr << " ]";
}

ll m, n;
vector<Test> arr;
vector<ll> hepte;

bool notok(ll x) {
  ll ballons = 0LL;
  vector<ll> ans;

  for (auto i : arr) {
    ll howMuch = 0LL, temp = 0LL;
    for (ll j = 0LL; j <= x;) {
      if (j + i.t > x) break;
      ballons++;
      temp++;
      howMuch++;
      j += i.t;
      if (howMuch % i.z == 0LL) {
        j += i.y;
        howMuch = 0LL;
      }
    }
    ans.push_back(temp);
    // debug(ballons)
  }

  // debug(ballons) debug(ans)
  if (ballons >= m) {
    hepte.assign(ans.begin(), ans.end());
  }
  return ballons < m;
}

signed main() {
  cin >> m >> n;
  arr.resize(n);
  hepte.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i].t >> arr[i].z >> arr[i].y;
  }

  ll l = 0LL, r = 1e7;
  for (int i = 0; i < 100; i++) {
    ll m = l + (r - l) / 2;

    if (notok(m))
      l = m;
    else
      r = m;
  }

  cout << r << '\n';
  for (auto i : hepte) cout << i << " ";
  return 0;
}

///////////////////////////////////////////////////////////////