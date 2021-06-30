#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

class Solution {
 public:
  bool isSubsequence(string s, string t) {
    unordered_map<char, int> sm;
    unordered_map<char, int> tm;

    for (auto c : s) {
      ++sm[c];
    }
    for (auto c : t) {
      ++tm[c];
    }

    for (int i = 0; i < count; i++)
    {
      
    }
    
  }
};

int main() { return 0; }
