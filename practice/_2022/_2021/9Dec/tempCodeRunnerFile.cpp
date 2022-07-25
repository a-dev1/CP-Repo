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
	cin >> n >> k;
	vector<int> arr(n);
	for (auto& i : arr) cin >> i;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		int l = -1, r = n, m, ok = true;
		while (r > l + 1) {
			m = (l + r) / 2;
			if (arr[m] >= x) {
				r = m;
			}
			else {
				l = m;
			}
		}
		// cout << l + 1 << '\n';
		cout << r + 1 << '\n';
	}
	return 0;
}