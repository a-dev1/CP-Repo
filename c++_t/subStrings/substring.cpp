#include <stdio.h>

#include <iostream>
using namespace std;
#include <string.h>
void solve(string);
int main() {
  int t;
  cin >> t;
  int i;
  for (i = 0; i < t; i++) {
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}
void solve(string s) {
  int i;
  long int count = 0;
  long int l = s.size();
  for (int i = 0; i < l; i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' ||
        s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' ||
        s[i] == 'I' || s[i] == 'U') {
      count += (l - i) * (i + 1);
    }
  }
  cout << count << endl;
}
// #include<iostream>
// #include<string>
// #include<vector>

// using namespace std;
// int main() {
//     string s = "abcd";
//     vector <string> subStrings;
//     int sum;

//     for (int i = 0; i < (int)s.length(); i++)
//     {
//         for (int j = 0; j < (int)s.length()-i; j++)
//         {
//             subStrings.push_back(s.substr(i, j+1));
//             // for(char c : )
//         }
//     }

//     for(auto a : subStrings){
//         cout << a << " ";
//     }

//     return 0;
// }