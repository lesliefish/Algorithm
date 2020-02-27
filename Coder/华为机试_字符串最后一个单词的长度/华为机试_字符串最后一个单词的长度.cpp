// 华为机试_字符串最后一个单词的长度.cpp 
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputString{};
    getline(cin, inputString);

    int count = 0;
    for (size_t i = inputString.size()-1; i >=0; i--)
    {
        if (inputString[i] == ' ')
        {
            if (count == 0)
            {
                continue;
            }
            else
            {
                cout << count << endl;
                return 0;
            }
        }
        else
        {
            count += 1;
            if (i == 0)
            {
                cout << count << endl;
                return 0;
            }
        }
    }

    return 0;
}