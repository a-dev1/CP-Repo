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
#define pb push_back
#define bg begin()
#define ed end()
#define set_bits __builtin_popcountint
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
// Node for storing minimum and maximum value of given range
struct node {
  int minimum;
  int maximum;
};

// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) { return s + (e - s) / 2; }

/*  A recursive function to get the minimum and maximum value in
     a given range of array indexes. The following are parameters
     for this function.

    st    --> Pointer to segment tree
    index --> Index of current node in the segment tree. Initially
              0 is passed as root is always at index 0
    ss & se  --> Starting and ending indexes of the segment
                  represented  by current node, i.e., st[index]
    qs & qe  --> Starting and ending indexes of query range */
struct node MaxMinUntill(struct node *st, int ss, int se, int qs, int qe,
                         int index) {
  // If segment of this node is a part of given range, then return
  //  the minimum and maximum node of the segment
  struct node tmp, left, right;
  if (qs <= ss && qe >= se) return st[index];

  // If segment of this node is outside the given range
  if (se < qs || ss > qe) {
    tmp.minimum = INT_MAX;
    tmp.maximum = INT_MIN;
    return tmp;
  }

  // If a part of this segment overlaps with the given range
  int mid = getMid(ss, se);
  left = MaxMinUntill(st, ss, mid, qs, qe, 2 * index + 1);
  right = MaxMinUntill(st, mid + 1, se, qs, qe, 2 * index + 2);
  tmp.minimum = min(left.minimum, right.minimum);
  tmp.maximum = max(left.maximum, right.maximum);
  return tmp;
}

// Return minimum and maximum of elements in range from index
// qs (query start) to qe (query end).  It mainly uses
// MaxMinUtill()
struct node MaxMin(struct node *st, int n, int qs, int qe) {
  struct node tmp;

  // Check for erroneous input values
  if (qs < 0 || qe > n - 1 || qs > qe) {
    printf("Invalid Input");
    tmp.minimum = INT_MIN;
    tmp.minimum = INT_MAX;
    return tmp;
  }

  return MaxMinUntill(st, 0, n - 1, qs, qe, 0);
}

// A recursive function that constructs Segment Tree for array[ss..se].
// si is index of current node in segment tree st
void constructSTUtil(int arr[], int ss, int se, struct node *st, int si) {
  // If there is one element in array, store it in current node of
  // segment tree and return
  if (ss == se) {
    st[si].minimum = arr[ss];
    st[si].maximum = arr[ss];
    return;
  }

  // If there are more than one elements, then recur for left and
  // right subtrees and store the minimum and maximum of two values
  // in this node
  int mid = getMid(ss, se);
  constructSTUtil(arr, ss, mid, st, si * 2 + 1);
  constructSTUtil(arr, mid + 1, se, st, si * 2 + 2);

  st[si].minimum = min(st[si * 2 + 1].minimum, st[si * 2 + 2].minimum);
  st[si].maximum = max(st[si * 2 + 1].maximum, st[si * 2 + 2].maximum);
}

/* Function to construct segment tree from given array. This function
   allocates memory for segment tree and calls constructSTUtil() to
   fill the allocated memory */
struct node *constructST(int arr[], int n) {
  // Allocate memory for segment tree

  // Height of segment tree
  int x = (int)(ceil(log2(n)));

  // Maximum size of segment tree
  int max_size = 2 * (int)pow(2, x) - 1;

  struct node *st = new struct node[max_size];

  // Fill the allocated memory st
  constructSTUtil(arr, 0, n - 1, st, 0);

  // Return the constructed segment tree
  return st;
}

signed main() {
  code_brains;
  int n, m;
  cin >> n >> m;
  int arr[m + 1];
  set<int> s;
  for (int i = 0; i < m; i++) {
    cin >> arr[i];
    if (arr[i] == 0) s.insert(i);
  }

  struct node *st = constructST(arr, m);

  int q;
  cin >> q;
  while (q--) {
    int sx, sy, ex, ey, k;
    cin >> sx >> sy >> ex >> ey >> k;
    sx--, ex--, sy--, ey--;

    if (abs(sx - ex) % k != 0 || abs(sy - ey) % k != 0) {
      cout << "NO\n";
      continue;
    }

    // debug(min(sy, ey));
    // debug(max(sy, ey));
    struct node result = MaxMin(st, m, min(sy, ey), max(sy, ey));
    ll a = result.maximum;

    ll l = 0, h = n - 1;
    bool possible = false;
    // debug(result.maximum);
    while (l <= h) {
      ll mid = (l + h) / 2;

      if (sx + (mid * k) >= n) {
        h = mid - 1;
      } else {
        if ((sx + (mid * k)) >= a) {
          possible = true;
          break;
        }
        l = mid + 1;
      }
    }

    if (possible)
      cout << "YES\n";
    else
      cout << "NO\n";
    // sx + (k * ?), what should be added to the value of ? so that the overall
    // value is greater than result.maximum and less than n;
  }
  return 0;
}

///////////////////////////////////////////////////////////////