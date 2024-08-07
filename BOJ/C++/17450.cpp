#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	const char result[3] = { 'S', 'N', 'U'};
	float best = 0.0f;
	int index = -1;

	for (int i = 0; i < 3; ++i)
	{
		float price(0.0f), weight(0.0f);
		std::cin >> price >> weight;

		float sum = price * 10.0f;
		if (sum >= 5000.0f)
		{
			sum -= 500.0f;
		}

		float temp = (10.0f * weight) / sum;
		if (best < temp)
		{
			best = temp;
			index = i;
		}
	}

	std::cout << result[index];
	return 0;
}
