// #include <cstdio.h>
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

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);

    map<int, int> m;

    int j = 2 * n, i = 1, a, b;

    printf("? %d", i);
    printf("\n\n");
    fflush(stdout);

    scanf("%d", &a);

    printf("? %d", i);
    printf("\n\n");
    fflush(stdout);

    scanf("%d", &b);

    m[a] = b;
    debug(a) debug(b)

        while (j != 0) {
      if (m.size() == n) break;
      int temp;

      printf("? %d\n\n", i);
      fflush(stdout);

      scanf("%d", &temp);

      debug(b) debug(temp) debug(m)

          if (m.count(b)) i++;
      else {
        m[b] = temp;
        b = temp;
      }
      j--;
    }

    printf("! ");
    // for (int i = 1; i <= n; i++) {
    //   printf("%d ", arr[i]);
    // }
    for (auto i : m) {
      printf("%d ", i.second);
    }
    printf("\n\n");
    fflush(stdout);
  }
  return 0;
}