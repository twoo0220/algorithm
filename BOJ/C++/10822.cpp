#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    std::string text;
    std::cin >> text;

    int size = text.size();
    int number(0), sum(0);
    for (int i = 0; i < size; ++i)
    {
        for (int j = i; i < size; ++i)
        {
            if (text[i] == ',')
            {
                break;
            }
            number *= 10;
            number += text[i] - 48;
        }
        sum += number;
        number = 0;
    }

    std::cout << sum;
    return 0;
}
