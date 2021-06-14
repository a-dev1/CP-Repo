#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int D, d, A, B, C;

    cin >> D >> d >> A >> B >> C;

    int x = 10, y = 21, z = 42;

    if (d * D >= x && d * D < 21)
      cout << A << endl;
    else if (d * D >= y && d * D < 42)
      cout << B << endl;
    else if (d * D >= z)
      cout << C << endl;
    else
      cout << 0;
  }

  return 0;
}