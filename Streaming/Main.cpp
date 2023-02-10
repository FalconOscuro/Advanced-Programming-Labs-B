#include <iostream>
#include <string>

using namespace std;

int main(int argn, char* argv[])
{
	int i;
	float f;
	// take an int and float from the console - separated by a space, e.g. "1 6.7"
	cin >> i >> f;

	// Take a string from the console
	string s;
	cin >> s;

	// output the int and float to the console
	cout << "i=" << i << ", f=" << f << endl;
	// output string
	cout << s << endl;
}
