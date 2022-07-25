#include <iostream>
using namespace std;
int main() {
  cout << "-------------------Aditya Sharma
      LEET-- -- -- -- -- -- -- -- -- -- --" << endl;
      int n;
  cout << "No of Elements:";
  cin >> n;
  int a[n];
  cout << "Enter elements :";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "Enter Element to search :";
  int x;
  cin >> x;
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      cout << "Element found at index " << i + 1 << endl;
      flag = 1;
      break;
    }
  }
  if (flag == 0) {
    cout << "Element not found.";
  }
  return 0;
}
