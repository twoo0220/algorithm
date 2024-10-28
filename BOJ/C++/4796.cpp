#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int index = 1;
	while (true)
	{
		int L(0), P(0), V(0), result(0);
		std::cin >> L >> P >> V;

		if (L == 0)
		{
			break;
		}

		while (true)
		{
			if (V > P)
			{
				result += L;
				V -= P;
			}
			else
			{
				result += L > V ? V : L;
				break;
			}
		}

		std::cout << "Case " << index << ": " << result << "\n";
		index++;
	}

	return 0;
}
