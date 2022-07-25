#include <conio.h>
#include <stdio.h>

#include <iostream>
#include <string>

using namespace std;

int nthOccurrence(string str, string findMe, int nth) {
  if (nth == 1) {
    if (str[0] == findMe[0]) return 0;
  }
  size_t pos = 0;
  int cnt = 0;

  while (cnt != nth) {
    pos += 1;
    pos = str.find(findMe, pos);
    if (pos == string::npos) return -1;
    cnt++;
  }
  return pos;
}

int main() {
  string first = "cbdef", second = "kcbd";

  cout << nthOccurrence(first, second, 1);
  return 0;
}