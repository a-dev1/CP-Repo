// #include <bits/stdc++.h>

// #define code_brains                 \
//   ;                                 \
//   ios_base::sync_with_stdio(false); \
//   cin.tie(NULL);                    \
//   cout.tie(0);
// using namespace std;

// typedef unsigned long long ull;
// typedef long long ll;
// typedef long double lld;

// const int MAX_N = 1e5 + 1;
// const int MOD = 1e9 + 7;
// #define endl "\n"
// #define PI 3.1415926535897932384626
// #define all(x) x.begin(), x.end()
// #define rall(x) x.rbegin(), x.rend()
// #define debug(x)     \
//   cerr << #x << " "; \
//   _print(x);         \
//   cerr << endl;
// #define present(c, x) (c.find(x) != c.end())
// #define desc greater<int>()
// #define fi first
// #define se second
// #define pb push_back
// #define bg begin()
// #define ed end()
// #define set_bits __builtin_popcountint
// #define setBits __builtin_popcount
// #define setBitsll __builtin_popcountll
// #define vl vector<ll>
// #define vi vector<int>
// #define vvi vector<vector<int>>
// #define vvl vector<vector<ll>>
// #define pi pair<int, int>
// #define pl pair<ll, ll>
// #define sz(a) a.size()
// #define len(a) a.length()

// int M = 1e9 + 7;
// int power(int a, int n) {
//   int result = 1;
//   while (n) {
//     if (n & 1) result = (result * (ll)a) % M;
//     n >>= 1;
//     a = (a * (ll)a) % M;
//   }
//   return result;
// }

// int power(int a, int n);
// int minv(int a) { return power(a, M - 2); }
// int mod(int n) { return (n % M + M) % M; }
// int modM(int n, int m) { return ((ll)(n % M) * (m % M)) % M; }
// int modA(int n, int m) { return ((ll)(n % M) + (m % M)) % M; }
// int modS(int n, int m) { return (((ll)(n % M) - (m % M)) + M) % M; }
// int modD(int n, int m) { return ((ll)(n % M) * (minv(m) % M)) % M; }
// int lcm(int a, int b) { return ((ll)a * b) / __gcd(a, b); }

// void _print(ll t) { cerr << t; }
// void _print(int t) { cerr << t; }
// void _print(string t) { cerr << t; }
// void _print(char t) { cerr << t; }
// void _print(lld t) { cerr << t; }
// void _print(double t) { cerr << t; }
// void _print(ull t) { cerr << t; }

// template <class T, class V>
// void _print(pair<T, V> p);
// template <class T>
// void _print(vector<T> v);
// template <class T>
// void _print(set<T> v);
// template <class T, class V>
// void _print(map<T, V> v);
// template <class T>
// void _print(multiset<T> v);
// template <class T, class V>
// void _print(pair<T, V> p) {
//   cerr << "{";
//   _print(p.first);
//   cerr << ",";
//   _print(p.second);
//   cerr << "}";
// }
// template <class T>
// void _print(vector<T> v) {
//   cerr << "[ ";
//   for (T i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }
// template <class T>
// void _print(set<T> v) {
//   cerr << "[ ";
//   for (T i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }
// template <class T>
// void _print(multiset<T> v) {
//   cerr << "[ ";
//   for (T i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }
// template <class T, class V>
// void _print(map<T, V> v) {
//   cerr << "[ ";
//   for (auto i : v) {
//     _print(i);
//     cerr << " ";
//   }
//   cerr << "]";
// }

// ///////////////////////////////////////////////////////////////
// void merge(vi arr, int start, int mid, int end) {
//   int ptr1 = 0, ptr2 = 0, s1 = mid, s2 = end;
//   vi temp;

//   while (ptr1 < s1 && ptr2 < s2) {
//     if (a1[ptr1] <= a2[ptr2]) {
//       temp.push_back(a1[ptr1]);
//       ptr1++;
//     }

//     if (a1[ptr1] >= a2[ptr2]) {
//       temp.push_back(a2[ptr2]);
//       ptr2++;
//     }
//   }

//   for (; ptr1 < s1; ptr1++) {
//     temp.push_back(a1[ptr1]);
//   }

//   for (; ptr2 < s2; ptr2++) {
//     temp.push_back(a2[ptr2]);
//   }
// }

// void mergeSort(vi &arr, int start, int end) {
//   if (start >= end) return;

//   int mid = (left + right) / 2;
//   mergeSort(arr, start, mid);
//   mergeSort(arr, mid + 1, end);
//   merge(arr, start, mid, end);
// }

// signed main() {
//   code_brains;
//   vector<int> arr = {3, 2, 5, 6, 10, 7, 1};
//   mergeSort(arr, 0, arr.size() - 1);
//   return 0;
// }

// ///////////////////////////////////////////////////////////////

// Merge sort in C++

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int p, int q, int r) {
  // Create L ← A[p..q] and M ← A[q+1..r]
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++) L[i] = arr[p + i];
  for (int j = 0; j < n2; j++) M[j] = arr[q + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = p;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int m = l + (r - l) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, m, r);
  }
}

// Print the array
void printArray(int *arr, int size) {
  for (int i = 0; i < size; i++) cout << arr[i] << " ";
  cout << endl;
}

// Driver program
int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, size - 1);

  cout << "Sorted array: \n";
  printArray(&arr[0], size);
  return 0;
}

// The result is that you're not passing the array at all; you pass a pointer to
// its first element.
//  void fun(int[])
//  is translated to fun(int*)
//  and
//  fun(myArray)
//  is silently translated into the following:
//  fun(&myArray[0])