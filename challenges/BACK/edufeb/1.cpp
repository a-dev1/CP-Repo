#include <bits/stdc++.h>
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0)
using namespace std;
 
signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int pow[30] = {0};
        int pq = 1;
        for (int i=0; i<30; i++) {
            int ui = pq;
            pow[i] = pq;
            pq *= k;
            if (ui != pq/k) {
                break;
            }
        }
        int flag=0;
        for (int i=0; i<n; i++) {
            int e = 0;
            if (arr[i]==0) {continue;}
            for (int j=29; j>=0; j--) {
                if (arr[i]>=pow[j] && pow[j]!=0) {
                    arr[i] -= pow[j];
                    pow[j] = 0;
                }
            }
            if (arr[i]!=0) {
                flag = 1;
                break;
            }
        }
        if (flag==1) {
            cout << "NO\n";
        } else cout << "YES\n";
    }
    return 0;
}