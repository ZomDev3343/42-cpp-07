#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string.h>

template <typename T>
void	iter(T* array, size_t len, void (*f)(T elem))
{
	if (!array || len <= 0 || !f)
		return ;
	for (size_t i = 0; i < len; i++)
		(*f)(array[i]);
}

template <typename T>
void plusTwo(T elem)
{
	std::cout << "PlusTwo[" << elem << "]: " << elem + 2 << std::endl;
}

template <typename T>
void plusTwoS(T elem)
{
	std::cout << "PlusTwo[" << elem << "]: " << elem + "2" << std::endl;
}

#endif
