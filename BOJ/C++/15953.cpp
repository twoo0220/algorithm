#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0);
	std::cin.tie(0);

	int count = 0;
	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		int a(0), b(0);
		std::cin >> a >> b;

		if (a == 0) { a = 0; }
		else if (a < 2) { a = 500; }
		else if (a < 4) { a = 300; }
		else if (a < 7) { a = 200; }
		else if (a < 11) { a = 50; }
		else if (a < 16) { a = 30; }
		else if (a < 22) { a = 10; }
		else { a = 0; }

		if (b == 0) { b = 0; }
		else if (b < 2) { b = 512; }
		else if (b < 4) { b = 256; }
		else if (b < 8) { b = 128; }
		else if (b < 16) { b = 64; }
		else if (b < 32) { b = 32; }
		else { b = 0; }

		std::cout << (a + b) * 10000 << "\n";
	}

	return 0;
}
