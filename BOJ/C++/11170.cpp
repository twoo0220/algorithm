#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int count = 0;
    std::cin >> count;

    for (int i = 0; i < count; ++i)
    {
        int N(0), M(0), result(0);
        std::cin >> N >> M;

        for (int j = N; j <= M; ++j)
        {
            int number = j;
            while (number != 0)
            {
                if ((number % 10) == 0)
                {
                    result++;
                }
                number /= 10;
            }
        }

        if (N == 0)
        {
            result++;
        }
        std::cout << result << "\n";
    }
    return 0;
}