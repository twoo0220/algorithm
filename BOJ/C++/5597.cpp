#include <iostream>

int main()
{
	bool task[30]{};
	for (int i = 0; i < 28; ++i)
	{
		int temp(0);
		std::cin >> temp;
		task[temp - 1] = true;
	}

	for (int i = 0; i < 30; ++i)
	{
		if (task[i] == false)
		{
			std::cout << (i + 1) << "\n";
		}
	}

	return 0;
}
