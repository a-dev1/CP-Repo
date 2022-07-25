#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007

void solve() {
  string s;
  cin >> s;
  int n = s.length();
  std::vector<int> v(n);
  int j = 1;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'N') {
      v[i] = j;
      j++;
    } else {
      v[i] = j;
      j++;
    }
  }

  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'E') {
      v[i] = v[i - 1];
    }
  }
  if (s[n - 1] == 'E') {
    v[0] = v[n - 1];
  }

  for (int i = 1; i < n; i++) {
    if (s[i - 1] == 'E') {
      v[i] = v[i - 1];
    }
  }
  v.push_back(v[0]);
  // for(auto x : v){
  //     cout << x <<" ";
  // }
  // cout <<"\n";
  bool found = true;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'E' && v[i] != v[i + 1]) {
      found = false;
      break;
    }
    if (s[i] == 'N' && v[i] == v[i + 1]) {
      found = false;
    }
  }

  if (found) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.length();
    vector<int> v(n);
    int j = 1;

    for (int i = 0; i < n; i++) {
      if (s[i] == 'N') {
        v[i] = j;
        j++;
      } else {
        v[i] = j;
        j++;
      }
    }

    for (int i = 1; i < n; i++) {
      if (s[i - 1] == 'E') {
        v[i] = v[i - 1];
      }
    }
    if (s[n - 1] == 'E') {
      v[0] = v[n - 1];
    }

    for (int i = 1; i < n; i++) {
      if (s[i - 1] == 'E') {
        v[i] = v[i - 1];
      }
    }
    v.push_back(v[0]);

    bool found = true;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'E' && v[i] != v[i + 1]) {
        found = false;
        break;
      }
      if (s[i] == 'N' && v[i] == v[i + 1]) {
        found = false;
      }
    }

    if (found) {
      cout << "YES\n";
      continue;
    }
    cout << "NO\n";
  }
}