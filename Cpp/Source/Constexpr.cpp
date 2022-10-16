#include <iostream>

// static const expressions
static constexpr size_t kLow = 1;
static constexpr size_t kMedium = 5;
static constexpr size_t kHigh = 10;

// If constexpr expression
void RunIfConstexprExample()
{
	static constexpr size_t kNumber = 6;

	if constexpr (kNumber < kLow)
	{
		std::cout << "Low\n";
	}
	else if constexpr (kNumber < kMedium)
	{
		std::cout << "Medium\n";
	}
	else if constexpr (kNumber < kHigh)
	{
		std::cout << "High\n";
	}
}

constexpr size_t GetConstexprValue()
{
	return 5;
}

int ConstexprMain()
{
	constexpr size_t num = GetConstexprValue();

	return 0;
}