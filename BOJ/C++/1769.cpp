#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    std::string number;
    std::cin >> number;

    int count = 0;
    while (number.size() > 1)
    {
        int temp = 0;
        for (int i = 0; i < number.size(); ++i)
        {
            temp += number[i] - 48;
        }
        number = std::to_string(temp);
        count++;
    }

    std::cout << count << '\n';
    if (std::stoi(number) % 3 == 0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
    return 0;
}