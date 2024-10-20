#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int hour(0), min(0), sec(0), time(0);
	std::cin >> hour >> min >> sec >> time;

	sec += time;
	min += sec / 60;
	sec %= 60;
	hour += min / 60;
	min %= 60;
	hour %= 24;
	
	std::cout << hour << " " << min << " " << sec;
	return 0;
}
