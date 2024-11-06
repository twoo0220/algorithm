#include <iostream>
#include <map>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int sum(0), maxValue(0);
	std::map<int, int> mm;
	for (int i = 0; i < 10; ++i)
	{
		int number = 0;
		std::cin >> number;
		sum += number;

		mm[number]++;
		if (mm[number] > mm[maxValue])
		{
			maxValue = number;
		}
	}

	std::cout << sum / 10 << "\n";
	std::cout << maxValue;
	return 0;
}
