#include <iostream>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	std::string L, R;
	std::cin >> L >> R;

	int count = 0;
	unsigned int Lsize = static_cast<unsigned int>(L.size());
	if (Lsize == R.size())
	{
		std::string subStr;
		for (unsigned int i = 0; i < Lsize; ++i)
		{
			if (L[i] == R[i])
			{
				subStr += L[i];
			}
			else
			{
				break;
			}
		}

		Lsize = subStr.size();
		for (unsigned int i = 0; i < Lsize; ++i)
		{
			if (subStr[i] == '8')
			{
				++count;
			}
		}
	}
	std::cout << count;
	return 0;
}
