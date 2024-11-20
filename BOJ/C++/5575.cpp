#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	for (int i = 0; i < 3; ++i)
	{
		int startTime(0), endTime(0), hour(0), min(0), sec(0);
		std::cin >> hour >> min >> sec;
		startTime = hour * 3600 + min * 60 + sec;

		std::cin >> hour >> min >> sec;
		endTime = hour * 3600 + min * 60 + sec;

		int workingTime = endTime - startTime;

		hour = workingTime / 3600;
		workingTime %= 3600;

		min = workingTime / 60;
		workingTime %= 60;

		sec = workingTime;

		std::cout << hour << " " << min << " " << sec << "\n";
	}

	return 0;
}
