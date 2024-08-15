# include "Start.hpp"

int main()
{
	int a = 2, b = 5;
	std::cout << "A: " << a << "\nB: " << b << std::endl;
	swap<int>(a, b);
	std::cout << "Post Swap" << std::endl;
	std::cout << "A: " << a << "\nB: " << b << std::endl;

	std::cout << "Max(a, b): " << ::max(a, b) << std::endl;
	std::cout << "Min(a, b): " << ::min(a, b) << std::endl;

	{
		std::cout << std::endl;
		std::cout << "Tests Sujet" << std::endl;
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}


	return 0;
}
