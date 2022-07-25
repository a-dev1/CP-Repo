#include <bits/stdc++.h>

using namespace std;

#define int long long

const int MAX_N = 1e5 + 1;
const int MOD = 1e9 + 7;
const int INF = 1e9;

signed main() {
  string str, str2;
  cin >> str;
  str2 = str;
  
  reverse(str2.begin(), str2.end());

  int isequal = true;

  for(int i = 0; i < str.length() - 1; i++) {
    if(str[i] != str[i+1]) {
      isequal = false;
    }
  }
  
  if (isequal) {
    cout << 0 << "\n";
    return 0;
  }
  if (str != str2)
    cout << str.length() << "\n";
  else {
    cout << str.length() - 1 << "\n";
  }
  return 0;
}