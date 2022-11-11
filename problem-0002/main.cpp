#include <iostream>

int main() {
	int sum = 0;
	int a = 0;
	int b = 1;

	while (b < 4'000'000)
       	{
		if (b % 2 == 0) sum += b;

		int temp = a + b;
		a = b;
		b = temp;
	}

	std::cout << sum << std::endl;

	return 0;
}

