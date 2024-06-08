#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int count = 0;
    std::cin >> count;

    int* dp = new int[count] {};
    int* arr = new int[count] {};

    std::cin >> arr[0];
    dp[0] = arr[0];
    int result = dp[0];
    for (int i = 1; i < count; ++i)
    {
        std::cin >> arr[i];
        dp[i] = std::max((dp[i - 1] + arr[i]), arr[i]);
        result = std::max(result, dp[i]);
    }

    std::cout << result;
    delete[] dp;
    dp = nullptr;

    delete[] arr;
    arr = nullptr;
    return 0;
}
