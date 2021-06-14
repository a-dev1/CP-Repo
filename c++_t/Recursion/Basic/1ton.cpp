#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ar array
#define ll long long

const int MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void printOnetoN(int num) {
  if (num == 1) {
    cout << num << " ";
    return;
  }
  printOnetoN(num - 1); //
  cout << num << " "; //Induction Step is important
}

void printNtoOne(int num) {
  if (num == 0) return;
  cout << num << " ";
  printNtoOne(num - 1);
}

int main() {
  int n;
  cin >> n;
  printOnetoN(n);
  cout << endl;
  printNtoOne(n);
  return 0;
}