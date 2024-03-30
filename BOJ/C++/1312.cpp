#include <iostream>

int main()
{
	int numerator(0), denominator(0), count(0), share(0);
	std::cin >> numerator >> denominator >> count;

	int remain = numerator % denominator;
	for (int i = 0; i < count + 1; ++i)
	{
		share = remain / denominator;
		remain = remain % denominator * 10;
	}

	std::cout << share;
	return 0;
}
