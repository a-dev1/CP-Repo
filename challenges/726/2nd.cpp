#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;


void solve() {

}

int main() {
    ll n, sum = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
      sum+=i;
      if(sum >= n) {
        cout << i;
        break;
      }
    }
    return 0;
}