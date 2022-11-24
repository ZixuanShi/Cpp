#include <iostream>

int main()
{
	int count = 0;

	while (count < 5)
	{
		std::cout << "While " << count << '\n';

		// count = count + 1;
		// count += 1;
		// count++;
		++count;
	}

	do
	{
		std::cout << "Do While " << count << '\n';
		++count;
	} while (count < 10);


	for (int i = 0; i < 5; ++i)
	{
		std::cout << "For " << i << '\n';
	}

	for (int i = 0; i < 50; i += 10)
	{
		std::cout << "For " << i << '\n';
	}

	for (int i = 5; i > 0; --i)
	{
		std::cout << "For " << i << '\n';
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			std::cout << "*";
		}
		std::cout << '\n';
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			std::cout << "*";
		}
		std::cout << '\n';
	}

	std::cout << "Hello World\n";
	return 0;
}