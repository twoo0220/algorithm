#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int hour(0), min(0), sec(0), a(0), b(0), c(0);
	char temp(0);
	std::cin >> hour >> temp >> min >> temp >> sec;
	std::cin >> a >> temp >> b >> temp >> c;
	
	int remainTime = (a - hour) * 3600 + (b - min) * 60 + (c - sec);
	if (remainTime < 0)
	{
		remainTime += 24 * 3600;
	}
	printf("%02d:%02d:%02d", remainTime / 3600, remainTime % 3600 / 60, remainTime % 60);
	
	return 0;
}
