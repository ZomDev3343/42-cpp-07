# include "Iter.hpp"

int main()
{
	int		arrayI[5] = {2, 54, 52, 732, 821};
	float	arrayF[2] = {2.45, 54.5436};
	std::string arrayS[5] = {"Roue", "Olympique", "France"};
	std::cout << "Pre Iter" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Array[" << i << "]: " << arrayI[i] << std::endl;
	::iter<int>(arrayI, 5, plusTwo);
	std::cout << std::endl << "Post Iter" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Array[" << i << "]: " << arrayI[i] << std::endl;
	::iter<float>(arrayF, 2, plusTwo);
	std::cout << std::endl;
	::iter<std::string>(arrayS, 3, plusTwoS);
	return 0;
}
