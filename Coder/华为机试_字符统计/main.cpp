#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	string inputString;

	while (getline(cin, inputString))
	{
		map<char, int> myMap{};
		for (int i = 0; i < inputString.size(); ++i)
		{
			char ch = inputString[i];
			if (isalpha(ch) || isdigit(ch) || ch == ' ')
			{
				myMap[ch]++;
			}
		}

		map<int, vector<char>> outMap{};
		for (auto iter : myMap)
		{
			outMap[iter.second].emplace_back(iter.first);
		}
		 
		for (auto riter = outMap.rbegin(); riter != outMap.rend(); ++riter)
		{
			for (auto it : riter->second)
			{
				cout << it;
			}
		}
		cout << endl;
	}

	return 0;
}
