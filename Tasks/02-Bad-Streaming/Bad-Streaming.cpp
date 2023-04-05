#include <iostream>

using namespace std;

int main(int argn, char* argv[])
{
   cout << "Enter a character string: ";

   char c[5];
   cin.get(c, 5);
   cout << "c = " << c << endl;
}