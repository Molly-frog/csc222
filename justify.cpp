#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "1" << endl;
  cout << "*" << -23 << "*" << endl;
  cout << "*" << setw(6) << -23 << "*" << endl;

  cout << "2" << endl;
  cout << left;
  cout << "*" << setw(6) << -23 << "*" << endl;

  cout << "3" << endl;
  cout << internal;
  cout << "*" << setw(6) << -23 << "*" << endl;
  
  cout << "4" << endl;
  cout << right;
  cout << "*" << setw(6) << -23 << "*" << endl;

  cout << "5" << endl;
  cout << internal;
  cout << "*" << setw(6) << -23 << "*" << endl;
  
  return 0;
}
