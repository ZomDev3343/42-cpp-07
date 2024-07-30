# include "Array.hpp"

int main()
{
	Array<int> a = Array<int>();
	std::cout << a << std::endl;
	a = Array<int>(6);
	std::cout << a << std::endl;
	a = Array<int>(4);
	std::cout << a << std::endl;

	return 0;
}