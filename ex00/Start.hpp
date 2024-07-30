#ifndef START_HPP
# define START_HPP

# include <iostream>
# include <string.h>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T const& a, T const& b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T max(T const& a, T const& b)
{
	if (a > b)
		return a;
	return b;
}

#endif
