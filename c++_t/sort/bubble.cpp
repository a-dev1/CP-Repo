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
// if smallest element prest at last needed o(n)
void bubbleSort(vector<int> &num) {
  for (int i = 0; i < num.size(); i++) {
    for (int j = 0; j < num.size(); j++) {
      if (num[j] > num[j + 1]) {
        int temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
}

int main() {
  vector<int> numbers = {5, 2, 1, 12, 4, 23, 0};
  bubbleSort(numbers);
  for (auto i : numbers) cout << "i:" << i << endl;
  return 0;
}

/**
// First Pass:
// ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares the first two
elements, and swaps since 5 > 1.
// ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
// ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in
order (8 > 5), algorithm does not swap them.
// Second Pass:
// ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
// ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
// Now, the array is already sorted, but our algorithm does not know if it is
completed. The algorithm needs one whole pass without any swap to know it is
sorted.
// Third Pass:
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
// ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
/* beautify preserve:end */