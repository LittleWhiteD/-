#include <iostream>
using namespace std;
int main()
{
	int a, b, c,d;
	cout << "enter number of 25:\n";
		cin >> a;
	cout << "enter number of 10:\n";
		cin >> b;
	cout << "enter number of 05:\n";
		cin >> c;
	d = 25 * a + 10 * b + 5 * c;
	cout << "all money is: " << d << endl;
	char qq;
	cout << "enter qq to end\n";
	cin >> qq;
	return 0;
}