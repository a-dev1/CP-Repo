//  Count total no. of valid bracket sequences in a sequence of size n.
#include <bits/stdc++.h>

#define code_brains                 \
  ;                                 \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(0);
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
#define present(c, x) (c.find(x) != c.end())
#define desc greater<int>()
#define fi first
#define se second
#define bg begin()
#define ed end()
#define set_bits __builtin_popcountint
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>

int M = 1e9 + 7;
int power(int a, int n) {
  int result = 1;
  while (n) {
    if (n & 1) result = (result * (ll)a) % M;
    n >>= 1;
    a = (a * (ll)a) % M;
  }
  return result;
}

int power(int a, int n);
int minv(int a) { return power(a, M - 2); }
int mod(int n) { return (n % M + M) % M; }
int modM(int n, int m) { return ((ll)(n % M) * (m % M)) % M; }
int modA(int n, int m) { return ((ll)(n % M) + (m % M)) % M; }
int modS(int n, int m) { return (((ll)(n % M) - (m % M)) + M) % M; }
int modD(int n, int m) { return ((ll)(n % M) * (minv(m) % M)) % M; }
int lcm(int a, int b) { return ((ll)a * b) / __gcd(a, b); }

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
// without stack with O(1) space
bool isBalanced(string str) {
  int open = 0, close = 0;

  for (char c : str) {
    if (c == '(')
      open++;
    else if (c == ')')
      close++;
    if (close > open) return false;
  }
  return open == close;
}

ll arr[MAX_N];
void validBracketCount(int n) {
  arr[0] = 1;
  for (int i = 1; i < MAX_N; i++) {
    for (int j = 0; j < i; j++) {
      arr[i] += arr[j] * arr[i - 1 - j];
    }
  }
}

vector<vector<string>> ans(100);

void generateAllValidBracket() {
  ans[0].push_back("");

  for (int i = 1; i <= 10; i++) {
    for (int j = 0; j < ans[i - 1].size(); j++) {
      string temp = "(" + ans[i - 1][j] + ")";
      string t1 = ans[i - 1][j] + "()", t2 = "()" + ans[i - 1][j];

      set<string> ss;
      ss.insert(temp);
      ss.insert(t1);
      ss.insert(t2);

      for (auto s : ss) ans[i].push_back(s);
    }
  }
}

vector<string> allValidBracket(int n) { return ans[n]; }

// Sinus_code, smart Solution
vector<string> generate(int N) {
  if (N == 0) {
    return {""};
  }

  vector<string> complete_sequence;
  for (int i = 0; i <= N - 1; i++) {
    vector<string> inside_bracket = generate(i);
    vector<string> outside_bracket = generate(N - 1 - i);
    for (string a : inside_bracket) {
      for (string b : outside_bracket) {
        string concatentated = "(" + a + ")" + b;
        complete_sequence.push_back(concatentated);
      }
    }
  }

  return complete_sequence;
}

signed main() {
  code_brains;
  // cout << isBalanced("((()))())");
  // allValidBracket(1);
  generateAllValidBracket();

  // for (auto i : allValidBracket(4)) {
  //   cout << i << " ";
  // }
  debug(generate(3));
  return 0;
}

///////////////////////////////////////////////////////////////