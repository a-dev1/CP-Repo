#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

bool prime[100005];

void SieveOfEratosthenes(int n){
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true){
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

signed main() {
    int n;
    cin >> n;
      SieveOfEratosthenes(n+1);
      for(int i = 2; i < n+1; i++) {
        if(SieveOfEratosthenes[i]) {
          cout << 1 << " ";     
        }
        else 
          cout << 2 << " ";
      }
    return 0;
}