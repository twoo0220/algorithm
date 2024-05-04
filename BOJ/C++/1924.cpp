#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int mm(0), dd(0);
	std::cin >> mm >> dd;

	for (int i = 0; i < mm; ++i)
	{
		dd += month[i];
	}

	std::cout << day[dd % 7];
	return 0;
}
