#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string temp;
	std::cin >> temp;

	for (int i = 0; i < temp.size(); ++i)
	{
		if (temp[i] < 97)
		{
			temp[i] += 32;
		}
		else
		{
			temp[i] -= 32;
		}
	}

	std::cout << temp;

	return 0;
}
