#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

int fib(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    int fibo1 = 0, fibo2 = 1, ans;
    n = n - 2;
    while (n--) {
        int temp = fibo2;
        fibo2 = fibo1 + fibo2;
        fibo1 = temp;
    }
    return fibo2;
}

signed main() {
    int n;
    cin >> n;
    cout << fib(n) << '\n';
    return 0;
}