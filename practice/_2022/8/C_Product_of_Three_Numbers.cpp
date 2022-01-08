#include <bits/stdc++.h>

#include <ext/numeric>

using namespace std;
using namespace __gnu_cxx;


typedef unsigned long long ull;
typedef long long ll;
typedef long double lld;

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
#define endl "\n"
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;


void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}


template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

///////////////////////////////////////////////////////////////
map<int, int> m;
void primeFactors(int n) {
  while (n % 2 == 0) {
    m[2]++;
    n = n / 2;
  }

  for (int i = 3; i * i <= n; i = i + 2) {
    while (n % i == 0) {
      m[i]++;
      n = n / i;
    }
  }

  if (n > 2) {
    m[n]++;
  }
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    primeFactors(n);
    debug(m)
    if (m.size() > 3) {
      cout << "YES\n";
      int cnt = 0;
      auto i = m.begin();
      for (; i != m.end(); i++) {
        if (cnt == 2) break;
        cout << power(i->first, i->second) << " ";
        cnt++;
      }
      int third;
      for (; i != m.end(); i++) {
        third *= power(i->first, i->second);
      }
      cout << third << '\n';
      continue;
    }
    if (m.size() == 3) {
      cout << "YES\n";
      for (auto i : m) {
        cout << power(i.first, i.second) << " ";
      }
      cout << '\n';
      continue;
    } else if (m.size() == 1) {
      auto it = m.begin();
      if (it->second < 6) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
        int cnt = 1;
        int howMuch = it->second;
        cout << power(it->first, cnt) << " ";
        cnt++;
        cout << power(it->first, cnt) << " ";
        cnt = it->second - 3;
        cout << power(it->first, cnt) << '\n';
      }
    } else if (m.size() == 2) {
      int sum = 0;
      for (auto i : m) {
        sum += i.second;
      }
      if (sum < 4) {
        cout << "NO\n";
      } else {
        cout << "YES\n";
        for (auto i : m) {
          cout << i.first << " ";
        }
        auto it = m.begin();
        int acnt = (it->second) - 1;
        it++;
        int bcnt = (it->second) - 1;

        it = m.begin();
        auto it2 = m.begin();
        it2++;
        cout << power(it->first, acnt) * power(it2->first, bcnt) << '\n';
      }
    }

    m.clear();
  }
  return 0;
}

///////////////////////////////////////////////////////////////i