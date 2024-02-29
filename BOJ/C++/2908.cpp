#include <iostream>

int main()
{
	int a(0), b(0);
	std::cin >> a >> b;

	int reverseA(0), reverseB(0);
	for (int i = 100; i > 0; i /= 10)
	{
		reverseA += a % 10 * i;
		a /= 10;

		reverseB += b % 10 * i;
		b /= 10;
	}

	if (reverseA > reverseB)
	{
		std::cout << reverseA;
	}
	else
	{
		std::cout << reverseB;
	}

	return 0;
}
