#include <iostream>
#include <algorithm>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int angle[3]{};
	std::cin >> angle[0];
	std::cin >> angle[1];
	std::cin >> angle[2];
	std::sort(angle, angle + 3);
	int sum = (angle[0] + angle[1] + angle[2]);
	
	if (sum == 180)
	{
		if (angle[0] == 60)
		{
			std::cout << "Equilateral";
		}
		else if ((angle[0] == angle[1]) || (angle[1] == angle[2]))
		{
			std::cout << "Isosceles";
		}
		else
		{
			std::cout << "Scalene";
		}
	}
	else
	{
		std::cout << "Error";
	}
	
	return 0;
}
