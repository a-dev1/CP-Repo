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

signed main() {
    int n, k;
    cin >> n;
    vector<int> arr(n);
    for (auto& i : arr) cin >> i;
    cin >> k;
    sort(arr.begin(), arr.end());
    //x >= arr[i];
    //y <= arr[i]; left most
    for (int i = 0; i < k; i++) {
        int x, y, l = -1, r = n, m;
        cin >> x >> y;
        while (r > l + 1) {
            m = (l + r) / 2;
            if (arr[m] >= x) {
                r = m;
            }
            else {
                l = m;
            }
        }
        int leftMost = r + 1;
        // cout << "leftMost:" << leftMost << endl;
        // cout << "l:" << l + 1 << endl;
        l = -1, r = n;
        while (r > l + 1) {
            m = (l + r) / 2;
            if (arr[m] > y) {
                r = m;
            }
            else {
                l = m;
            }
        }
        // cout << "r:" << r << endl;
        if ((r - leftMost) < 0) { cout << 0 << ' '; }
        else cout << (r - leftMost) + 1 << ' ';
    }
    return 0;
}