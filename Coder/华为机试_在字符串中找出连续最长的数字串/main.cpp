#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
	string inputString;
	while (cin >> inputString)
	{
		string numStr;
		map<int, vector<string>> myMap{};

		for (int i = 0; i < inputString.size(); ++i)
		{
			char ch = inputString[i];
			if (isdigit(ch))
			{
				numStr += ch;
			}
			else
			{
				if (!numStr.empty())
				{
					myMap[numStr.size()].emplace_back(numStr);
					numStr = string();
				}
			}
		}

		if (!numStr.empty())
		{
			myMap[numStr.size()].emplace_back(numStr);
		}

		auto lastone = myMap.rbegin();
		for (auto iter : lastone->second)
		{
			cout << iter;
		}
		cout << "," << lastone->second[0].size();
		cout << endl;
	}

	return 0;
}