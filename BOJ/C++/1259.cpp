#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    while (true)
    {
        std::string number;
        std::cin >> number;

        if (number == "0")
        {
            break;
        }

        bool bCheck = true;
        int size = number.size();
        for (int i = 0; i <= size / 2; ++i)
        {
            if (number[i] != number[size - 1 - i])
            {
                bCheck = false;
                break;
            }
        }

        if (bCheck)
        {
            std::cout << "yes\n";
        }
        else
        {
            std::cout << "no\n";
        }
    }

    return 0;
}
