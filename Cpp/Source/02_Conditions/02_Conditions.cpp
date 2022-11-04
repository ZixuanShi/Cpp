#include <iostream>

int main()
{
	int number = 50;

	// Basic if statement
	if (number == 50)
	{
		std::cout << "number == 50\n";
	}

	// if-else
	if (number == 51)
	{
		std::cout << "number == 51\n";
	}
	else
	{
		std::cout << "number != 51\n";
	}

	// else if
	if (number == 51)
	{
		std::cout << "number == 51\n";
	}
	else if (number == 49)
	{
		std::cout << "number == 49\n";
	}
	else if (number == 55)
	{
		std::cout << "number == 55\n";
	}
	else if (number == 59)
	{
		std::cout << "number == 59\n";
	}/*
	else
	{
		std::cout << "number\n";
	}*/

	switch (number)
	{
	case 10:
	{
		std::cout << "number == 10\n";
		break;
	}
	case 30:
	{
		std::cout << "number == 30\n";
		break;
	}
	//case 50:
	//{
	//	std::cout << "number == 50\n";
	//	break;
	//}
	default:
	{
		std::cout << "default\n";
		break;
	}
	}

	return 0;
}