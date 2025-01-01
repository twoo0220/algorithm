#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cout.tie(0);
    std::cin.tie(0);

    int len = 0;
    long long hash(0), r(1), M(1234567891);
    std::string str;
    std::cin >> len >> str;

	for (int i = 0; i < len; i++)
	{
		hash = (hash + (static_cast<long long>(str[i]) - 96LL) * r) % M;
		r = (r * 31) % M;
	}

    std::cout << hash;
    return 0;
}
