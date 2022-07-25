#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007
set<char> st;
int stillChecking(string &s,string &p){

    int cnt = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == p[i]) continue;
        if(s[i] != p[i]){
           if(st.find(s[i]) != st.end() and st.find(p[i]) != st.end() or st.find(s[i]) == st.end() and st.find(p[i]) == st.end()){
              cnt += 2;
           }
           else{
             cnt += 1;
           }
        }
    }

    return cnt;
}
int check(string s,string p,char ch){

    for(int i=0;i<s.length();i++){
        if(s[i] == '?'){
           s[i] = ch;
        }
        if(p[i] == '?'){
           p[i] = ch;
        }
    }

    int get = stillChecking(s,p);

    return get;
}
void solve(){ 
    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
   int n; cin >> n;
   string s; cin >> s;
   string p; cin >> p;

   if(s == p) {
      cout << 0 <<"\n";
      return;
   } 

   int ans = INT_MAX;

   for(int i=0;i<26;i++){
      char ch = 'a'+i;
      int g = check(s,p,ch);
      ans = min(ans,g);
   }

   cout << ans <<"\n";
}


signed main(){
  int t; cin >> t;
  while(t--)
      solve();
}