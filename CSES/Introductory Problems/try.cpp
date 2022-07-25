// C++ program for implementation of selection sort
#include <iostream>
using namespace std;

// void iswap(int *xp, int *yp)
// {
// 	int temp = *xp;
// 	*xp = *yp;
// 	*yp = temp;
// }

void iselection_Sort(int arr[], int n) {
  int i, j, min;

  // One by one move boundary of unsorted subarray
  for (i = 0; i < n - 1; i++) {
    // Find the minimum element in unsorted array
    min = i;
    for (j = i + 1; j < n; j++)
      if (arr[j] < arr[min]) min = j;

    // Swap the found minimum element with the first element
    swap(arr[min], arr[i]);
  }
}

/* Function to print an array */
void printArray(int arr[], int size) {
  int i;
  for (i = 0; i < size; i++) cout << arr[i] << " ";
  cout << endl;
}

// Driver program to test above functions
int main() {
  int arr[] = {64, 25, 12, 22, 11};
  int n = sizeof(arr) / sizeof(arr[0]);
  iselection_Sort(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}