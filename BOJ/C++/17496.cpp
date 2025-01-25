#include <iostream>

int main()
{
        std::ios_base::sync_with_stdio(0);
        std::cout.tie(0);
        std::cin.tie(0);

        int N(0), T(0), C(0), P(0);
        std::cin >> N >> T >> C >> P;
        std::cout << ((N - 1) / T * C * P);

        return 0;
}