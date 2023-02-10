#include <iostream>
#include <string>

using namespace std;

int main(int argn, char* argv[])
{
	cout << "Enter an int and a float separated by a ' '(space): ";
	int i;
	float f;
	// take an int and float from the console - separated by a space, e.g. "1 6.7"
	cin >> i >> f;

	// Take a string from the console
	cout << "Enter a string: ";
	string s;
	cin >> s;

	// output the int and float to the console
	cout << "i=" << i << ", f=" << f << endl;
	// output string
	cout << s << endl;
}
