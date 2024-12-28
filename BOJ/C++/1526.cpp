#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int number = 0;
    std::cin >> number;

    for (int i = number; i >= 4; --i)
    {
        int temp = i;

        while (temp != 0)
        {
            int a = temp % 10;
            if ((a != 4) && (a != 7))
            {
                break;
            }
            temp /= 10;
        }

        if (temp == 0)
        {
            std::cout << i;
            break;
        }
    }

    return 0;
}
