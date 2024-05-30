/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:01:18 by soutin            #+#    #+#             */
/*   Updated: 2024/05/24 19:48:11 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

const char *Span::FullStockOfNumbersException::what() const throw()
{
	return ("FullStockOfNumbersException");
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return ("NotEnoughNumbersException");
}

Span::Span():
	_n(0)
{ }

Span::Span(const unsigned int n):
	_n(n)
{ }

Span::Span(const Span &other):
	_array(other._array),
	_n(other._n)
{ }

Span::~Span()
{ }

Span &Span::operator=(const Span &other)
{
	if (this == &other)
		return (*this);
	_array = other._array;
	_n = other._n;
	return (*this);
}

void Span::addNumber(int newNb)
{
	if (_array.size() >= _n)
		throw FullStockOfNumbersException();
	_array.push_back(newNb);
}

int Span::longestSpan()
{
	if (_array.size() < 2)
		throw NotEnoughNumbersException();
	return (std::abs(*std::max_element(_array.begin(), _array.end())
			- *min_element(_array.begin(), _array.end())));
}

int	Span::shortestSpan()
{
	int	span;
	
	if (_array.size() < 2)
		throw NotEnoughNumbersException();
		
	std::vector<int> array(_array);
	std::sort(array.begin(), array.end());
	
	span = std::abs(array[1] - array[0]);
	for (size_t i = 1; i < array.size(); i++)
		span = std::min(span, std::abs(array[i] - array[i - 1]));
	
	return (span);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}