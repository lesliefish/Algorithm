#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inputString;
	while (getline(cin, inputString))
	{
		int zimuCount = 0;
		int spaceCount = 0;
		int numCount = 0;
		int otherCount = 0;
		for (auto i = 0; i < inputString.size(); ++i)
		{
			auto ch = inputString[i];
			zimuCount += isalpha(ch) > 0;
			spaceCount += isspace(ch) > 0;
			numCount += isdigit(ch) > 0;
			otherCount += !(isalpha(ch) || isspace(ch) || isdigit(ch));
		}

		cout << zimuCount << endl;
		cout << spaceCount << endl;
		cout << numCount << endl;
		cout << otherCount << endl;
	}


	return 0;
}