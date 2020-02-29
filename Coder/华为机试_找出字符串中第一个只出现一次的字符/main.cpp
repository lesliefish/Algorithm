#include <iostream>
#include <string>

using namespace std;

int main()
{
	string inputString{};

	while (getline(cin, inputString))
	{
		for (int i = 0; i < inputString.size(); ++i)
		{
			bool hasOther = false;
			for (int j = 0; j < inputString.size(); j++)
			{
				if (i != j && inputString[i] == inputString[j])
				{
					hasOther = true;
					break;
				}
			}

			if (!hasOther)
			{
				cout << inputString[i] << endl;
				break;
			}
			else if (i == inputString.size() - 1)
			{
				cout << -1 << endl;
			}
		}
	}

	return 0;
}