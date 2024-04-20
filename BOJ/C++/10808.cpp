#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	int arr[26]{};
	std::string word;
	std::cin >> word;

	for (int i = 0; i < word.size(); ++i)
	{
		arr[word[i] - 97]++;
	}

	for (int i = 0; i < 26; ++i)
	{
		std::cout << arr[i] << " ";
	}

	return 0;
}
