#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	int arr[26]{
		3, 3, 3, 4, 4, 4, 5, 5, 5,
		6, 6, 6, 7, 7, 7, 8, 8, 8, 8,
		9, 9, 9, 10, 10, 10, 10
	};

	int result = 0;
	for (int i = 0; i < temp.size(); ++i)
	{
		result += arr[static_cast<int>(temp[i]) - 65];
	}

	std::cout << result;
	return 0;
}
