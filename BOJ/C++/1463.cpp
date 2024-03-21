#include <iostream>

int main()
{
	int number(0);
	std::cin >> number;

	int* arr = new int[1000000] {};
	for (int i = 2; i <= number; ++i)
	{
		arr[i] = arr[i - 1] + 1;
		if ((i % 2) == 0)
		{
			arr[i] = arr[i] < (arr[i / 2] + 1) ? arr[i] : arr[i / 2] + 1;
		}

		if ((i % 3) == 0)
		{
			arr[i] = arr[i] < (arr[i / 3] + 1) ? arr[i] : arr[i / 3] + 1;
		}
	}

	std::cout << arr[number];

	delete[] arr;
	arr = nul

	// 1이 1이 되기 위한 최소횟수 0 => arr[1] = 1
	// 2가 1이 되기 위한 최소횟수 1 => arr[2] = 1 , 2 / 1
	// 3이 1이 되기 위한 최소횟수 1 => arr[3] = 1 , 3 / 1
	// 4가 1이 되기 위한 최소횟수 2 => arr[4] = 2 , (4 - 1) / 2 or (4 / 2) / 2
	// n을 1로 만들기 위한 최소횟수 = n - 1을 1로 만들기 위한 최소횟수 + 1
	// 2로 나누기를 우선하여 계산
	
	return 0;
}
