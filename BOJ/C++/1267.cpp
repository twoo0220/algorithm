#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int size(0), Y(0), M(0);
	std::cin >> size;

	for (int i = 0; i < size; ++i)
	{
		int time = 0;
		std::cin >> time;

		Y += ((time / 30) + 1) * 10;
		M += ((time / 60) + 1) * 15;
	}

	if (Y > M)
	{
		std::cout << "M " << M;
	}
	else if (Y == M)
	{
		std::cout << "Y M " << Y;
	}
	else
	{
		std::cout << "Y " << Y;
	}

	return 0;
}
