/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:05:45 by soutin            #+#    #+#             */
/*   Updated: 2024/04/19 12:31:31 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
Fixed::Fixed()
{
	_val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}


Fixed&	Fixed::operator=(const Fixed& value)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &value)
		return (*this);
	_val = value.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	return (_val);	
}

void Fixed::setRawBits( int const raw )
{
	_val = raw;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	_val = value << _fractBits;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	_val = roundf(value * (1 << _fractBits));
}


std::ostream&	operator<<(std::ostream& outs, const Fixed& value)
{
	outs << value.toFloat();
	return outs;
}

float Fixed::toFloat() const
{
	return (float)((float)_val / (float)(1 << _fractBits));
}

int Fixed::toInt() const
{
	return (_val >> _fractBits);
}
