#include <iostream>

int main()
{
    long long min(0), max(0);
    std::cin >> min >> max;

    long long size = 10000001;
    bool* primeArr = new bool[size] {};

    for (long long i = 2; i <= size; ++i)
    {
        if (primeArr[i] == false)
        {
            for (long long j = i * i; j <= size; j += i)
            {
                if (j < size)
                {
                    primeArr[j] = true;
                }
            }
        }
    }

    int count(0);
    for (long long i = 2; i <= size; ++i)
    {
        if (i * i > max)
        {
            break;
        }

        if (false == primeArr[i])
        {
            long long temp = i * i;
            while (temp <= max)
            {
                if (temp >= min)
                {
                    count++;
                }
                temp *= i;

                if (temp % i != 0)
                {
                    break;
                }
            }
        }
    }

    std::cout << count;

    delete[] primeArr;
    primeArr = nullptr;

    return 0;
}
