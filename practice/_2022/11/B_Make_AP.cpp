#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
ll a, b, c;
 
void solve(){
    cin >> a >> b >> c;
 
    if((b+b-a) >= c && (b+b-a)%c == 0){
        cout << "YES";
        return;
    }
    if((b+b-c) >= a && (b+b-c)%a == 0){
        cout << "YES";
        return;
    }
    if((a+c)%2 == 0 && (a+c)/2 >= b && (a+c)/2%b == 0){
        cout << "YES";
        return;
    }
 
 
    cout << "NO";
}
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
 
    int tc = 1; cin >> tc;
    while(tc--) solve(), cout << "\n";
}