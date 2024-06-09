#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int arr[15][15]{};
    for (int i = 0; i < 15; ++i)
    {
        arr[0][i] = i;
    }

    for (int i = 1; i < 15; ++i)
    {
        for (int j = 0; j < 15; ++j)
        {
            for (int k = 0; k <= j; ++k)
            {
                arr[i][j] += arr[i - 1][k];
            }
        }
    }

    int count = 0;
    std::cin >> count;

    for (int i = 0; i < count; ++i)
    {
        int k(0), n(0);
        std::cin >> k >> n;
        std::cout << arr[k][n] << "\n";
    }

    return 0;
}
