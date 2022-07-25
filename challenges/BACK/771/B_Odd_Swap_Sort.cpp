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

bool solve(vector<int> arr,int n) {
    
    int pp = 0, pt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] % 2 == 0 && arr[i] < pt) {
        ans = 1;
        break;
      }
      if (arr[i] % 2 == 1 && arr[i] < pp) {
        ans = 1;
        break;
      }

      if (arr[i] % 2 == 0) {
        pt = arr[i];
      } else
        pp = arr[i];
    }

    if(ans == 1) return true;
    else return false;
}

signed main() {
  code_brains;
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    if(solve(arr, n)) {
      cout << "No\n";
    }
    else  
      cout << "Yes\n";
      
  }
  return 0;
}

///////////////////////////////////////////////////////////////