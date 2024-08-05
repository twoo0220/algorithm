#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int head = 0;
		std::cin >> head;

		std::string action;
		std::cin >> action;

		for (int j = 0; j < action.size(); ++j)
		{
			if (action[j] == 'b')
			{
				head--;
			}
			else
			{
				head++;
			}
		}

		std::cout << "Data Set " << (i + 1) << ":\n";
		std::cout << head << "\n\n";
	}
	return 0;
}
