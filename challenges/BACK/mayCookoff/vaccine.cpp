#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int G, P, x[11], i, min_time = 0, max_time = 0, prev = 0;
  
    cin >> G >> P;

    for(i = 1; i < 11; i++) {
      cin >> x[i];
    }

    for(i = 10; i >= G; i--) {

      if((x[i]+prev) < P && i == G) {
        max_time = min_time;
      }
      else {

        if((x[i]+prev) < P) {
          prev += x[i];
        }
        else {
          min_time += (x[i] + prev)/P;
          prev = (x[i] + prev) % P;
        }

        if(i == G) {
          if(prev > 0)
            max_time = min_time + prev;
          else
            max_time = min_time;
        }
      }
    }

    cout << min_time << " " << max_time << endl;
  }
  
  return 0;
}