/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 17:40:52 by soutin            #+#    #+#             */
/*   Updated: 2024/05/24 14:50:03 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstdlib>
#include <exception>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T> &other);
		~Array();

		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("OutOfBoundsException");
				}
		};

		Array<T>	&operator=(const Array<T> &other);
		T			&operator[](const unsigned int idx);
		const T		&operator[](const unsigned int idx) const;

		unsigned int	size() const;

	private:
		T				*_rawArray;
		unsigned int	_size;
};

template <typename T>
Array<T>::Array():
	_rawArray(NULL),
	_size(0)
{ }

template <typename T>
Array<T>::~Array()
{
	delete [] _rawArray;
}

template <typename T>
Array<T>::Array(unsigned int n):
	_rawArray(new T[n]),
	_size(n)
{
	for (size_t i = 0; i < _size; i++)
		_rawArray[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T> &other):
	_rawArray(NULL)
{
	Array::operator=(other);
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this == &other)
		return (*this);
	if (_rawArray)
		delete [] _rawArray;
	_rawArray = new T[other.size()];
	_size = other.size();
	for (size_t i = 0; i < _size; i++)
		_rawArray[i] = other._rawArray[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](const unsigned int idx)
{
	if (idx >= _size || idx < 0)
		throw OutOfBoundsException();
	else
		return (_rawArray[idx]);
}

template <typename T>
const T &Array<T>::operator[](const unsigned int idx) const
{
	if (idx >= _size || idx < 0)
		throw OutOfBoundsException();
	else
		return (_rawArray[idx]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

#endif