#include <iostream>

int main()
{
	// This is a comment
	// DataType ValueName = Value;

	// bool
	// Examples: true or false
	bool booleanExample1 = true;
	booleanExample1 = false;

	// char
	// One single literal character
	// Example: 'A', 'B'...'Z', '@', '^', '5'
	char charExample1 = 'A';
	charExample1 = 'a';
	char charExample2 = '@';
	char charExample3 = '0';
	std::cout << charExample1 << '\n';

	// int
	// A signed number
	// Examples: -1, 0, 1, 123
	int intExample = 100;
	intExample += -100;
	std::cout << intExample << '\n';

	// unsigned int
	// An unsigned integer
	// Examples: 0, 1, 2, 3
	unsigned int uintExample = 500;
	uintExample -= 501;
	std::cout << uintExample << '\n';

	// float
	// Floating-point number
	// Examples: -1.5f, 0.05f, 4555.044f
	float floatExample = 0.5f;
	floatExample *= 15.0f;
	std::cout << floatExample << '\n';

	// double
	// Double sized/precision Floating-point number 
	// Examples: 0.00545565
	double doubleExample = 0.156656465865;		// No f suffix at the end
	doubleExample /= 2.0;
	std::cout << doubleExample << '\n';

	// String
	// By multiple chars
	// Example: "Hello World"
	const char* StringExample = "Hello World from C-String";
	std::string StringExample2 = "Hello World from STL";
	std::cout << StringExample << '\n';
	std::cout << StringExample2 << '\n';

	return 0;
}