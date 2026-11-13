// noboolalpha and boolalpha
// its like a switch

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  bool a = true, b = false;

  cout << "a " << a << endl;
  cout << boolalpha <<  "a " << a << endl;
  // turning boolalpha on

  cout << noboolalpha << "b " << b << endl;
  // turning it off
  cout << boolalpha <<  "b " << b << endl;
  // turning it on again


  return 0;
}
