# include "Array.hpp"

int main()
{
	Array<int> a = Array<int>();
	std::cout << a << std::endl;
	a = Array<int>(6);
	std::cout << a << std::endl;
	a = Array<int>(4);
	a[3] = 26;
	std::cout << a << std::endl;
	try
	{
		a[4] = 2385;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	return 0;
}
