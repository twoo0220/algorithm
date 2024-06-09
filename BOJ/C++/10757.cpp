#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    std::vector<char> arr;
    std::string number_1, number_2;
    std::cin >> number_1 >> number_2;

    int maxSize = number_1.size();
    int minSize = number_2.size();
    bool check = false;
    if (number_2.size() > maxSize)
    {
        maxSize = number_2.size();
        minSize = number_1.size();
        check = true;
    }
    std::reverse(number_1.begin(), number_1.end());
    std::reverse(number_2.begin(), number_2.end());

    char remainChar = 0;
    for (int i = 0; i < maxSize; ++i)
    {
        char temp = remainChar;
        if (i >= minSize)
        {
            if (check)
            {
                temp += number_2[i];
            }
            else
            {
                temp += number_1[i];
            }
        }
        else
        {
            temp += number_1[i] + number_2[i] - 48;
        }

        if (temp > 57)
        {
            temp -= 10;
            remainChar = 1;
        }
        else
        {
            remainChar = 0;
        }
        arr.push_back(temp);
    }

    if (remainChar == 1)
    {
        arr.push_back(49);
    }

    maxSize = arr.size();
    for (int i = maxSize - 1; i >= 0; --i)
    {
        std::cout << arr[i];
    }

    return 0;
}
