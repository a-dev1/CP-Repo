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
#define pb push_back
#define setBits __builtin_popcount
#define setBitsll __builtin_popcountll
#define vl vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define sz(a) a.size()
#define len(a) a.length()

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
void merge(vi &arr, int start, int mid, int end) {
  int s1 = mid - start + 1;
  int s2 = end - mid;

  vi arr1(s1), arr2(s2);
  for (int i = 0; i < s1; i++) arr1[i] = arr[i + start];

  for (int i = 0; i < s2; i++) arr2[i] = arr[mid + 1 + i];

  int i = 0, j = 0, k = start;
  while (i < s1 && j < s2) {
    if (arr1[i] < arr2[j]) {
      arr[k] = arr1[i];
      i++;
    } else {
      arr[k] = arr2[j];
      j++;
    }
    k++;
  }

  while (i < s1) arr[k] = arr1[i], i++, k++;

  while (j < s2) arr[k] = arr2[j], j++, k++;
}

void mergeSort(vi &arr, int start, int end) {
  // if start and end becomes equal i don't want to break it more
  if (start >= end) return;
  int mid = (start + end) / 2;

  mergeSort(arr, start, mid);
  mergeSort(arr, mid + 1, end);

  merge(arr, start, mid, end);
}

signed main() {
  code_brains;
  vector<int> arr = {4, 5, 1, 3, 10, 9};
  mergeSort(arr, 0, arr.size() - 1);

  for(auto i : arr) cout << i << " ";
  return 0;
}

///////////////////////////////////////////////////////////////
// The result is that you're not passing the array at all; you pass a pointer to
// its first element.
//  void fun(int[])
//  is translated to fun(int*)
//  and
//  fun(myArray)
//  is silently translated into the following:
//  fun(&myArray[0])