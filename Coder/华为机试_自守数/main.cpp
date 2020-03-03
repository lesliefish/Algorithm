#include <iostream>
#include <string>

using namespace std;

int main()
{
	int inputNum{};
	while (cin >> inputNum)
	{
		int iCount = 0;
		for (int i = 0; i < inputNum; i++)
		{
			int ii = i*i;
			string strii = to_string(ii);
			string reverseStrii = string(strii.rbegin(), strii.rend());
			string strI = to_string(i);
			string reverseStri = string(strI.rbegin(), strI.rend());

			bool bZishou = true;
			for (int j = 0; j < reverseStri.size(); j++)
			{
				if (reverseStri[j] != reverseStrii[j])
				{
					bZishou = false;
					break;
				}
			}

			iCount += bZishou;
		}

		cout << iCount << endl;
	}

	return 0;
}