#include <iostream>

long long fibArr[1000001]{};
static long long fib(int n)
{
    if ((0 == n) || (1 == n))
    {
        return fibArr[n];
    }

    if (0 == fibArr[n])
    {
        fibArr[n] = (fib(n - 1) + fib(n - 2)) % 1000000007;
    }

    return fibArr[n];
}

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    fibArr[1] = 1;

    int count = 0;
    std::cin >> count;
    std::cout << fib(count);
    return 0;
}
