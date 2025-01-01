#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int N(0), M(0);
    std::cin >> N >> M;

    int* arr = new int[N] {};

    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }

    int index(0), sum(0), count(0);
    for (int i = 0; i < N; ++i)
    {
        index = i;
        sum = 0;
        while (index < N)
        {
            sum += arr[index];
            if (sum == M)
            {
                ++count;
                break;
            }
            else if (sum > M)
            {
                break;
            }
            ++index;
        }
    }

    std::cout << count;
    delete[] arr;

    return 0;
}
