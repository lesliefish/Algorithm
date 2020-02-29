#include <iostream>
#include <vector>

using namespace  std;

bool isSuShu(int num)
{
	for (int i = 2; i*i <= num; ++i)
	{
		if (num % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int inputNum = 0;
	while (cin >> inputNum)
	{
		for (int i = inputNum / 2; i >= 2; i--)
		{
			if (isSuShu(i) && isSuShu(inputNum - i))
			{
				cout << i << endl << inputNum - i << endl;
				break;
			}
		}
	}

	return 0;
}