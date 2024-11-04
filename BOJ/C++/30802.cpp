#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int arr[6]{};
	int size = 0;
	std::cin >> size;

	for (int i = 0; i < 6; ++i)
	{
		std::cin >> arr[i];
	}

	int T(0), P(0);
	std::cin >> T >> P;

	int result = 0;
	for (int i = 0; i < 6; ++i)
	{
		if (arr[i] % T == 0)
		{
			result += arr[i] / T;
		}
		else
		{
			result += arr[i] / T + 1;
		}
	}
	
	std::cout << result << "\n" << size / P << " " << size % P;
	return 0;
}
