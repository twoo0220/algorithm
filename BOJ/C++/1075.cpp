#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int N(0), F(0), result(0);
	std::cin >> N >> F;

	N /= 100;
	N *= 100;
	
	while (true)
	{
		if ((((N + result) % F) == 0) || (result > 100))
		{
			break;
		}
		result++;
	}

	if (result < 10)
	{
		std::cout << "0";
	}
	std::cout << result;

	return 0;
}
