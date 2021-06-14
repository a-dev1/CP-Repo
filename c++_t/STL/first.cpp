#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
  map<int, int> myMap;
  myMap[1] = 10;
  myMap[1] = 10;
  myMap[2] = 20;
  myMap[3] = 30;
  myMap[1] = 0;
  myMap[4] = 40;
  // myMap.insert(pair<int, int>(1, 40));
  // myMap.insert(pair<int, int>(2, 30));
  // myMap.insert(pair<int, int>(3, 60));
  // myMap.insert(pair<int, int>(4, 20));
  // myMap.insert(pair<int, int>(5, 50));
  // myMap.insert(pair<int, int>(6, 50));
  // myMap.insert(pair<int, int>(7, 10));
  cout << "First element: " << myMap.begin()->second << endl;
  // automatically detects the type of variable(auto).
  // map<int, int>::iterator i = myMap.begin();
  for (auto i = myMap.begin(); i != myMap.end(); i++) {
    cout << i->first << " " << i->second << endl;
  }
  return 0;
}