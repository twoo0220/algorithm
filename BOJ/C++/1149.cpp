#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int arr[1000][3]{};
    int result[1000][3]{};

    int r(0), g(0), b(0), count(0);
    std::cin >> count;

    for (int i = 1; i <= count; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= count; ++i)
    {
        result[i][0] = std::min(result[i - 1][1], result[i - 1][2]) + arr[i][0];
        result[i][1] = std::min(result[i - 1][0], result[i - 1][2]) + arr[i][1];
        result[i][2] = std::min(result[i - 1][0], result[i - 1][1]) + arr[i][2];
    }
    
    std::cout << std::min(std::min(result[count][0], result[count][1]), result[count][2]);
    return 0;
}
