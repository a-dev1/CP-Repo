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
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
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

signed main() {
  code_brains;
  int t;
  cin >> t;
  while(t--){
    int n, m, minL;
    cin >> n >> m >> minL;

    vector<vector<int>> arr(n, vector<int> (m, 0));

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        char c; cin >> c;
        if(c == '*') arr[i][j] = 1;
      }
    }

    // debug(arr);

    for(int i = n-1; i >= 0; i--) {
      for(int j = 0; j < m; j++) {
        int commonL = 0;
        if(arr[i][j] != 0) {
          while(i-commonL-1 >= 0 && j-commonL-1 >= 0 && j+commonL+1 < m && arr[i-commonL-1][j-commonL-1] != 0 && arr[i-commonL-1][j+commonL+1] != 0 ) {
            commonL++;
          }
        }

        //mark all visited
        for(int k = 1; k <= commonL && commonL >= minL; k++) {
          arr[i][j] = 2;
          arr[i-k][j-k] = 2;
          arr[i-k][j+k] = 2;
        }
      }
    }

    bool isPossible = true;

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(arr[i][j] == 1) {
          isPossible = false;
          break;
        }
      }
      if(!isPossible) break;
    }

    if(isPossible) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

///////////////////////////////////////////////////////////////