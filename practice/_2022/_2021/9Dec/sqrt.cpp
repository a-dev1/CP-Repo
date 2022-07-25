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

int mySqrt(int x) {
    int l = 1, r = x, mid, ans;
    while (r >= l) {
        mid = l + (r - l) / 2;
        if (mid * mid <= x) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return ans;
}

signed main() {
    int n;
    cin >> n;
    cout << "mySqrt(n):" << mySqrt(n) << endl;
    return 0;
}