#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <sys/types.h>
# include <stdexcept>

template <typename T>
class Array
{

	public:

		Array();
		Array(uint n);
		Array( Array const & src );
		~Array();

		Array &		operator=( Array const & rhs );
		T* const& 	getArray() const;
		uint const&	size() const;

		T&	operator[]( std::size_t idx );

	private:
		T*		_array;
		uint	_size;

};

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & i );

template <typename T>
Array<T>::Array()
{
	this->_array = NULL;
	this->_size = 0;
}

template <typename T>
Array<T>::Array(uint n)
{
	this->_array = new T[n];
	this->_size = n;
	for (uint i = 0; i < n; i++)
		this->_array[i] = T();
}

template <typename T>
Array<T>::Array( const Array<T> & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::~Array()
{
	if (this->_array)
		delete[] this->_array;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array<T> &Array<T>::operator=( Array<T> const & rhs )
{
	if (this->_array)
		delete[] this->_array;
	this->_array = NULL;
	if (rhs._size > 0)
	{
		this->_array = new T[rhs._size];
		for (uint i = 0; i < rhs._size; i++)
			this->_array[i] = rhs._array[i];
	}
	this->_size = rhs._size;
	return *this;
}

template <typename T>
T* const &Array<T>::getArray() const
{
	return this->_array;
}

template <typename T>
uint const &Array<T>::size() const
{
	return this->_size;
}

template <typename T>
std::ostream &			operator<<( std::ostream & o, Array<T> const & i )
{
	if (i.size() == 0)
		return o << "Array: empty", o;
	o << "Array size : " << i.size() << std::endl;
	for (uint j = 0; j < i.size(); j++)
		o << "Array[" << j << "]: " << i.getArray()[j] << std::endl;
	return o;
}

template <typename T>
T&			Array<T>::operator[]( std::size_t idx )
{
	if (idx >= this->_size)
		throw std::out_of_range("Error: Array<T>: Invalid index !");
	return this->_array[idx];
}

#endif /* *********************************************************** ARRAY_H */
