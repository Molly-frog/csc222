#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "no setw" << endl;
	cout << '*' << 2 << '*' << endl;

	cout << '*' << "setw 10" << endl;
	cout << '*' << setw(10) << 2 << '*' << endl;

	cout << '*' << "setw 20" << endl;
	cout << '*' << setw(20) << endl;

	cout << '*' << "setw 0" << endl;
	cout << '*' << setw(0) << 2 << '*' << endl;

	return 0;
}
