#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inputString;

	while (cin >> inputString)
	{
		string newString;
		string tempStr = "*";
		for (int i = 0; i < inputString.size(); ++i)
		{
			if (isdigit(inputString[i]))
			{
				tempStr += inputString[i];
			}
			else
			{
				if (tempStr == "*")
				{
					newString += inputString[i];
				}
				else
				{
					tempStr += "*";
					tempStr += inputString[i];
					newString += tempStr;
					tempStr = "*";
				}
			}
		}

		if (tempStr != "*")
		{
			tempStr += "*";
			newString += tempStr;
		}

		cout << newString << endl;
	};

	return 0;
}