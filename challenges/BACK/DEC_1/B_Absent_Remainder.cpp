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

int main(){
    int tt; cin >> tt;
    while(tt--){
    int n; cin >> n;
    std::vector<int> v(n);
    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin >> v[i]; m[v[i]]++;
    }

    int need = ceil(n/2);
    int cnt = 0;

    sort(v.begin(),v.end());
    bool ok = false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int a = v[j]%v[i];
            if(m[a] == 0) cnt++;
            if(cnt <= need){
                cout << v[j] <<" "<<v[i]<<"\n";
            }
             if(cnt >= need){
                    ok = true;
                    break;
                }
        }
        if(ok) break;
      }
    }
}