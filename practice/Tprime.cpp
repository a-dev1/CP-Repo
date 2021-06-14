// // #include <bits/stdc++.h>
// #define int long long
// using namespace std;

// set<int> s;

// bool isPrime(int n) {
//     for (int i = 2; i * i <= n; ++ i) {
//         if (n % i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// signed main(){
   
//     s.insert(4);
//     for (int i = 3; i <= 1000000; i += 2) {
//         if (isPrime(i)) {
//             s.insert((long long)i * i);
//         }
//     }

//     int n; cin >> n;
//     for(int i=0;i<n;i++){
//         int x; cin >> x;
//             s.find(x) != s.end() ? cout <<"YES\n" : cout <<"NO\n";
//         }
// }