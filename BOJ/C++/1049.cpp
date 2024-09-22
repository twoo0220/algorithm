#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count(0), size(0), pack(1000), piece(1000);
	std::cin >> count >> size;

	for (int i = 0; i < size; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;
		if (a < pack)
		{
			pack = a;
		}
		if (b < piece)
		{
			piece = b;
		}
	}

	if ((piece * 6) < pack)
	{
		std::cout << piece * count;
	}
	else
	{
		int result = pack * (count / 6);
		result += ((count % 6) * piece) < pack ? ((count % 6) * piece) : pack;
		std::cout << result;
	}

	return 0;
}
