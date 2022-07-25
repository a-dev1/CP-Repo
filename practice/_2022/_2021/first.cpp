#include <iostream>
using namespace std;

int main()
{
  int b = 37, a = 63;
  // b += (b++) + (++b) + b;
  a = ++b + ++b + ++b + ++b + ++b;
  //4 + 5
  //5 + 5
  //38 + 39 => 77  
  //38 + 39 + 40 + 41 + 42
  //158 - me
  //159 - compiler
  cout <<"a:" << a << endl;
  cout <<"b:" << 38 + 39 + 40 + 41 + 42 << endl;
  return 0;
}