#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int fibo[100]{};
	fibo[1] = 1;
	fibo[2] = 1;

	int count = 0;
	std::cin >> count;

	for (int i = 3; i <= count; ++i)
	{
		fibo[i] = fibo[i - 2] + fibo[i - 1];
	}

	std::cout << fibo[count] << ' ' << count - 2;
	return 0;
}
