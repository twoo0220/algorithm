#include <iostream>

int main()
{
	int n(0), m(0);
	std::cin >> n >> m;

	int** arr = new int* [n] {};
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[m] {};
	}

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < m; ++k)
			{
				int temp(0);
				std::cin >> temp;
				arr[j][k] += temp;
			}
		}
	}

	for (int j = 0; j < n; ++j)
	{
		for (int k = 0; k < m; ++k)
		{
			std::cout << arr[j][k] << " ";
		}
		std::cout << "\n";
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] arr[i];
		arr[i] = nullptr;
	}

	delete[] arr;
	arr = nullptr;
	
	return 0;
}
