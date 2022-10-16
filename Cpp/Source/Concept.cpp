#include <iostream>
#include <concepts>

//--------------------------------------------------------------------------------------------------------------------------------
// Testing data
//--------------------------------------------------------------------------------------------------------------------------------
class Foo
{
public:
	Foo() = default;
	Foo(int32_t data)
		: m_data(data)
	{
	}

public:
	// Demo purposes. Bar class not numeric but supports * operator
	Foo operator*(const Foo& other)
	{
		return Foo(m_data * other.m_data);
	}

	friend std::ostream& operator<<(std::ostream& stream, const Foo& object)
	{
		stream << object.m_data;
		return stream;
	}

private:
	int32_t m_data = 0;
};

class Bar
{
public:
	Bar() = default;
	~Bar() = default;
	Bar(const Bar&) = default;
	Bar& operator=(const Bar&) = default;
	Bar(Bar&&) = delete;
	Bar& operator=(Bar&&) = delete;

public:
	void Work() {}
};

class Baz : public Bar
{
};

//--------------------------------------------------------------------------------------------------------------------------------
// Example 1: Numeric limitations
//--------------------------------------------------------------------------------------------------------------------------------
template<typename NumType>
concept Numeric = std::is_integral_v<NumType> || std::is_floating_point_v<NumType>;

/**
 * Takes in a numeric number, return the squared of that input
 * @param val		Guaranteed a numeric number, either integral or floating point
 * @return			The squared result of val
 */
constexpr Numeric auto Square(Numeric auto val)
{
	return val * val;
}

//--------------------------------------------------------------------------------------------------------------------------------
// Example 2: Inheritance
//--------------------------------------------------------------------------------------------------------------------------------
template<class DerivedType, class BaseType>
concept DerivedFrom = std::is_base_of_v<BaseType, DerivedType>;

template<DerivedFrom<Bar> TypeDerivedFromBar>
void ExampleDerivedFromBar(TypeDerivedFromBar& object)
{
	object.Work();
}

//--------------------------------------------------------------------------------------------------------------------------------
// Example 3: Movable
//--------------------------------------------------------------------------------------------------------------------------------
template<class Type>
concept Movable = std::is_move_assignable_v<Type> && std::is_move_constructible_v<Type>;

template<Movable MovableType>
void ExampleMovable(MovableType object)
{
	MovableType newObject(std::move(object));
}

int conceptMain()
{
	Foo foo;	// Supports operator * with another Foo object
	Bar bar;	// Parent of Baz, not movable
	Baz baz;	// Child of Bar

	// Example 1: Numeric Numbers
	std::cout << Square(5) << '\n';
	std::cout << Square(5.5f) << '\n';
	std::cout << Square(5u) << '\n';
	//Foo foo(25);
	//std::cout << Square(foo) << '\n';		// Can't compile because foo is not a number

	// Example 2: Inheritance
	// ExampleDerivedFromBar(foo);			// Not derived from Bar
	ExampleDerivedFromBar(bar);
	ExampleDerivedFromBar(baz);

	// Example 3: Movable
	ExampleMovable(foo);
	//ExampleMovable(bar);
	ExampleMovable(baz);

	return 0;
}