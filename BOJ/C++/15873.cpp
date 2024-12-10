#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    std::string number;
    std::cin >> number;

    int a(0), b(0);
    int length = number.length();
    if (length == 2)
    {
        a = number[0] - '0';
        b = number[1] - '0';
    }
    else if (length == 3)
    {
        if (number[1] == '0')
        {
            a = (number[0] - '0') * 10;
            b = number[2] - '0';
        }
        else
        {
            a = (number[0] - '0');
            b = (number[1] - '0') * 10;
        }
    }
    else
    {
        a = (number[0] - '0') * 10;
        b = (number[2] - '0') * 10;
    }

    std::cout << a + b;
    return 0;
}