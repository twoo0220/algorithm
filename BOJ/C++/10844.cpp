#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    long long step[101][11]{};
    long long result = 0;
    int size = 0;

    for (int i = 1; i < 10; ++i)
    {
        step[1][i] = 1;
    }
    
    std::cin >> size;

    for (int i = 2; i <= size; ++i)
    {
        step[i][0] = step[i - 1][1] % 1000000000;

        for (int j = 1; j < 9; ++j)
        {
            step[i][j] = (step[i - 1][j - 1] + step[i - 1][j + 1]) % 1000000000;
        }

        step[i][9] = step[i - 1][8] % 1000000000;
    }

    for (int i = 0; i < 10; ++i)
    {
        result += step[size][i];
    }
    std::cout << result % 1000000000;

    return 0;
}
