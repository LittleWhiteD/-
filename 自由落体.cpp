#include <iostream>
using namespace std;

int main()
{
	int t;
	float L;
		cout << "     请输入一个下落时间（单位:秒）\n";
		cin >> t;
		L = 9.8*t*t / 2;
		cout << "     用了: "<<t<<"秒钟"<<"\n     呆呆下落了: ";
		cout << L;
		cout << "米的高度\n\n";
		cout << "那么，呆呆开不开心啊？？\n";
		char v;
		cout << "enter a v to end the program:\n";
		cin >> v;
	return 0;
}