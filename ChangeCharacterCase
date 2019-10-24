#include <iostream>
using namespace std;


char lowerToUpper(char c)
{
	return (c & '_');
}

char upperToLower(char c)
{
	// ASCII value of space (' ') is 32 
	// so it is equivalent to (1 << 5 )
	return (c | ' ');
}

int main()
{
	char c;
	cout << "Enter Character ( in lower case ) : \n";
	cin >> c;
	cout << "Output :  "  << lowerToUpper(c);
	cout << "\n\nEnter Character ( in Upper case ) : \n";
	cin >> c;
	cout << "Output :  "  << upperToLower(c);

	return 0;
}
