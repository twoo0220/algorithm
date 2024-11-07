#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int L(0), A(0), B(0), C(0), D(0);
	std::cin >> L >> A >> B >> C >> D;

	int read = A / C;
	A %= C;
	if (A > 0) read++;

	int math = B / D;
	B %= D;
	if (B > 0) math++;

	std::cout << (L - (read > math ? read : math));
	return 0;
}
