#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<int> arr = {9, 8, 7, 6, 5, 4, 3, 2, 1};

  int n = arr.size();

  for (int i = 1; i < n; i++) {
    int temp = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > temp) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = temp;
  }

  for (auto i : arr) cout << i << " ";
}