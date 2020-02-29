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
		map<char, vector<bool>> myMap{};
		vector<string> vsOtherIndex{};

		for (size_t i = 0; i < inputString.size(); i++)
		{
			if (isalpha(inputString[i]))
			{
				myMap[toupper(inputString[i])].emplace_back(isupper(inputString[i]));
			}
			else
			{
				vsOtherIndex.emplace_back(string() += inputString[i]);
			}
		}

		string newStr;
		for (auto iterMap : myMap)
		{
			for (auto bupper : iterMap.second)
			{
				newStr += bupper ? iterMap.first : tolower(iterMap.first);
			}
		}

		auto strIter = newStr.cbegin();
		auto otherIter = vsOtherIndex.cbegin();
		for (size_t i = 0; i < inputString.size(); i++)
		{
			if (isalpha(inputString[i]))
			{
				cout << *strIter;
				strIter++;
			}
			else
			{
				cout << *otherIter;
				otherIter++;
			}
		}
		cout << endl;
	}

	return 0;
}