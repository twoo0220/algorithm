#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string equation;
	std::cin >> equation;

	size_t size = equation.size();
	int result = 0;
	std::string temp;
	bool bCheck = false;
	for (size_t i = 0; i < size; ++i)
	{
		if ((equation[i] == '+') || equation[i] == '-')
		{
			if (bCheck)
			{
				result -= std::stoi(temp);
			}
			else
			{
				result += std::stoi(temp);
			}
			temp.clear();
		}
		else
		{
			temp += equation[i];
		}

		if (equation[i] == '-')
		{
			bCheck = true;
		}
	}

	if (bCheck)
	{
		result -= std::stoi(temp);
	}
	else
	{
		result += std::stoi(temp);
	}

	std::cout << result;
	return 0;
}
