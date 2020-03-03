#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int stuCount;
	bool is2Big;
	while (cin >> stuCount >> is2Big)
	{
		map<int, vector<string>> myMap;
		while (stuCount--)
		{
			string name;
			int score;

			cin >> name >> score;
			myMap[score].emplace_back(name);
		}

		if (is2Big)
		{
			for (auto iter : myMap)
			{
				for (auto viter : iter.second)
				{
					cout << viter << " " << iter.first << endl;
				}
			}
		}
		else
		{
			for (auto iter = myMap.rbegin(); iter != myMap.rend(); ++iter)
			{
				for (auto viter : iter->second)
				{
					cout << viter << " " << iter->first << endl;
				}
			}
		}
	}

	return 0;
}