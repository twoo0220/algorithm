#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	int arr[26]{};
	for (size_t i = 0; i < temp.size(); ++i)
	{
		if (static_cast<int>(temp[i]) < 97)
		{
			arr[static_cast<int>(temp[i]) - 65]++;
		}
		else
		{
			arr[static_cast<int>(temp[i]) - 97]++;
		}
	}

	int maxValue = 0;
	int maxIndex = 0;
	for (int i = 0; i < 26; ++i)
	{
		if (arr[i] == maxValue)
		{
			maxIndex = -2;
		}
		else if (arr[i] > maxValue)
		{
			maxValue = arr[i];
			maxIndex = i;
		}
	}

	std::cout << static_cast<char>(maxIndex + 65);
	return 0;
}
