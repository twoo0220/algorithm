#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	float priceX(0), gram(0);
	int store = 0;
	std::cin >> priceX >> gram >> store;
	float minPrice = priceX / gram;

	for (int i = 0; i < store; ++i)
	{
		float anotherX(0.0f), anotherGram(0.0f);
		std::cin >> anotherX >> anotherGram;
		float tempMin = anotherX / anotherGram;

		minPrice = tempMin < minPrice ? tempMin : minPrice;
	}

	std::cout << minPrice * 1000;
	return 0;
}
