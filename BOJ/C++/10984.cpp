#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size = 0;
	std::cin >> size; 

	std::cout.precision(2);
	for (int i = 0; i < size; ++i)
	{
		int count = 0;
		std::cin >> count;

		float sum(0), total(0);
		for (int j = 0; j < count; ++j)
		{
			float grade(0), score(0);
			std::cin >> grade >> score;
			sum += grade;
			total += (grade * score);
		}

		std::cout << static_cast<int>(sum) << " " << (total / sum) << "\n";
	}
	return 0;
}
