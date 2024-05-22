#include <iostream>

unsigned int dp[301]{};
unsigned int temp[301]{};

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    unsigned int size = 0;
    std::cin >> size;

    for (int i = 0; i < size; ++i)
    {
        std::cin >> temp[i];
    }

    dp[0] = temp[0];
    dp[1] = temp[0] + temp[1];
    dp[2] = std::max(temp[0] + temp[2], temp[1] + temp[2]);

    for (int i = 3; i < size; ++i)
    {
        dp[i] = std::max(dp[i - 2] + temp[i], temp[i - 1] + temp[i] + dp[i - 3]);
    }

    std::cout << dp[size - 1];
    return 0;
}
