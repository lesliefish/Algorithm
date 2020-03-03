#include <string>
#include <iostream>

using namespace std;

int main()
{
	string inputString;
	while (getline(cin, inputString))
	{
		cout << string(inputString.rbegin(), inputString.rend()) << endl;
	}

	return 0;
}