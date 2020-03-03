#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	int iNumcount;
	while (cin >> iNumcount)
	{
		list<int> myList{};

		while (iNumcount--)
		{
			int iNum;
			cin >> iNum;
			myList.push_back(iNum);
		}
		myList.sort();

		bool flag{};
		cin >> flag;
		if (!flag)
		{
			for (auto iter = myList.begin(); iter != myList.end(); ++iter)
			{
				cout << *iter << " ";
			}
		}
		else
		{
			for (auto iter = myList.rbegin(); iter != myList.rend(); ++iter)
			{
				cout << *iter << " ";
			}
		}
		cout << endl;
	}

	return 0;
}