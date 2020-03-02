#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	string inputString{};
	while (cin >> inputString)
	{
		map<char, int> myMap{};
		for (int i = 0; i < inputString.size(); ++i)
		{
			myMap[inputString[i]]++;
		}

		int minValue = myMap.cbegin()->second;
		for (auto iter : myMap)
		{
			if (iter.second < minValue)
			{
				minValue = iter.second;
			}
		}

		string newString{};
		for (int i = 0; i < inputString.size(); ++i)
		{
			auto findIter = myMap.find(inputString[i]);
			if (findIter->second == minValue)
			{
				continue;
			}

			newString += inputString[i];
		}

		cout << newString << endl;
	}

	return 0;
}