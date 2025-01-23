#include <iostream>
#include <string>

static std::string sumbinary(std::string a, std::string b)
{
	std::string result;
	int carry = 0;
	int i = a.size() - 1;
	int j = b.size() - 1;
	while (i >= 0 || j >= 0 || carry)
	{
		carry += i >= 0 ? a[i--] - '0' : 0;
		carry += j >= 0 ? b[j--] - '0' : 0;
		result = char(carry % 2 + '0') + result;
		carry /= 2;
	}
	return result;
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string a, b;
	std::cin >> a >> b;

	std::string result = sumbinary(a, b);

	for (int i = 0; i < result.size(); i++)
	{
		if (result[i] == '0')
		{
			result.erase(i, 1);
			i--;
		}
		else
		{
			break;
		}
	}

	if (result.empty())
	{
		result = "0";
	}
	std::cout << result;

	return 0;
}
