#include <iostream>

long long cmbArr[30][30]{};

long long cmb(int n, int r)
{
	if (cmbArr[n][r] == 0)
	{
		cmbArr[n][r] = cmb(n - 1, r - 1) + cmb(n - 1, r);
	}

	return cmbArr[n][r];
}

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cout.tie(0);
	std::cin.tie(0);

	for (int i = 0; i < 30; ++i)
	{
		cmbArr[i][0] = 1;
		cmbArr[i][i] = 1;
	}

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int n(0), r(0);
		std::cin >> n >> r;
		std::cout << cmb(r, n) << "\n";
	}

	return 0;
}
