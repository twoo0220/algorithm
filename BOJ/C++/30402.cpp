#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	char temp = 0;
	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			std::cin >> temp;
			
			if (temp == 'w')
			{
				std::cout << "chunbae";
				goto finish;
			}
			else if (temp == 'b')
			{
				std::cout << "nabi";
				goto finish;
			}
			else if (temp == 'g')
			{
				std::cout << "yeongcheol";
				goto finish;
			}
		}
	}
finish:
	return 0;
}
