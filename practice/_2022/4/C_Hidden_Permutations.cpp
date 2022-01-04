#include <cstdio>
#include <cstring>
#include <vector>
 
using namespace std;
 
int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<int> arr(n + 1);
 
    int j = n;
    while (j != 0) {
      int a, b;
      printf("? %d\n", j);
      fflush(stdout);
 
      scanf("%d", &a);
 
      printf("? %d\n", j);
      fflush(stdout);
      scanf("%d", &b);
 
      arr[a] = b;
      j--;
    }
 
    printf("! ");
    for (int i = 1; i <= n; i++) {
      printf("%d ", arr[i]);
    }
    printf("\n");
    fflush(stdout);
  }
  return 0;
}