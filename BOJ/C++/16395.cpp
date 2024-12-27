#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int n(0), k(0);
    std::cin >> n >> k;

    int triangle[31]{};
    int prevTri[31]{};

    triangle[1] = 1;
    prevTri[1] = 1;

    for (int i = 1; i <= n; ++i)
    {
        triangle[i] = 1;
        for (int j = 2; j < i; ++j)
        {
            triangle[j] = prevTri[j - 1] + prevTri[j];
        }

        for (int j = 1; j <= i; ++j)
        {
            prevTri[j] = triangle[j];
        }
    }

    std::cout << triangle[k];

    return 0;
}
