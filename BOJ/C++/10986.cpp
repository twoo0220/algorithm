#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    long long count(0), value(0), result(0), remain(0);
    std::cin >> count >> value;

    std::vector<long long> vec(value + 1);
    
    for (long long i = 0; i < count; ++i)
    {
        long long number = 0;
        std::cin >> number;
        remain += number;
        remain %= value;
        
        vec[remain]++;
    }

    for (long long i = 0; i < value; ++i)
    {
        result += ((vec[i] * (vec[i] - 1LL)) / 2LL);
    }

    std::cout << result + vec[0];
    return 0;
}