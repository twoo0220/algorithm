#include <iostream>
#include <string>

int main()
{
	std::string temp;
	std::cin >> temp;

	int arr[26]{};
	for (int i = 0; i < 26; ++i)
	{
		arr[i] = -1;
	}
	
	for (int i = 0; i < temp.size(); ++i)
	{
		if (arr[static_cast<int>(temp[i]) - 97] == -1)
		{
			arr[static_cast<int>(temp[i]) - 97] = i;
		}
	}

	for (int i = 0; i < 26; ++i)
	{
		std::cout << arr[i] << " ";
	}
	return 0;
}
