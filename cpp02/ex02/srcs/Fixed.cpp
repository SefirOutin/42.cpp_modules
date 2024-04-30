/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:05:45 by soutin            #+#    #+#             */
/*   Updated: 2024/04/23 18:02:49 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed()
{
	_val = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &value)
{
	*this = value;
}

Fixed::Fixed(const int value)
{
	_val = value << _fractBits;
}

Fixed::Fixed(const float value)
{
	_val = roundf(value * (1 << _fractBits));
}

Fixed	&Fixed::operator=(const Fixed& value)
{
	if (this == &value)
		return (*this);
	_val = value.getRawBits();
	return (*this);
}


bool			Fixed::operator<(const Fixed& value) const
{
	return (_val < value.getRawBits());
}

bool			Fixed::operator>(const Fixed& value) const
{
	return (_val > value.getRawBits());
}

bool			Fixed::operator<=(const Fixed& value) const
{
	return (_val <= value.getRawBits());
}

bool			Fixed::operator>=(const Fixed& value) const
{
	return (_val >= value.getRawBits());
}

bool			Fixed::operator==(const Fixed& value) const
{
	return (_val == value.getRawBits());
}

bool			Fixed::operator!=(const Fixed& value) const
{
	return (_val != value.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &rval) const
{
	Fixed res;
	res.setRawBits(_val + rval._val);
	return (res);
}

Fixed	Fixed::operator-(const Fixed &rval) const
{
	Fixed res;
	res.setRawBits(_val - rval._val);
	return (res);
}

Fixed	Fixed::operator*(Fixed const &rval) const
{
	Fixed res;
	res.setRawBits((int64_t)_val * (int64_t)rval._val >> _fractBits);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &rval) const
{
	Fixed res;
	res.setRawBits(_val / rval.toFloat());
	return (res);
}

Fixed	Fixed::operator++()
{
	Fixed	tmp;
	_val++;
	tmp._val = _val;
	return (tmp);
}
Fixed	Fixed::operator--()
{
	Fixed	tmp;
	_val--;
	tmp._val = _val;
	return (tmp);
}
Fixed	Fixed::operator++(int)
{
	Fixed	tmp;
	tmp._val = _val;
	_val++;
	return (tmp);
}
Fixed	Fixed::operator--(int)
{
	Fixed	tmp;
	tmp._val = _val;
	_val--;
	return (tmp);
}

int Fixed::getRawBits( void ) const
{
	return (_val);	
}

void Fixed::setRawBits( int const raw )
{
	_val = raw;
}

std::ostream&	operator<<(std::ostream& outs, const Fixed& value)
{
	outs << (float)value.toFloat();
	return outs;
}

float Fixed::toFloat() const
{
	return ((float)_val / (float)(1 << _fractBits));
}

int Fixed::toInt() const
{
	return (_val >> _fractBits);
}


Fixed	&Fixed::min(Fixed &num, Fixed &num1)
{
	if (num <= num1)
		return (num);
	return (num1);
}

const Fixed	&Fixed::min(const Fixed &num, const Fixed &num1)
{
	if (num._val <= num1._val)
		return (num);
	return (num1);
}

Fixed	&Fixed::max(Fixed &num, Fixed &num1)
{
	
	if (num >= num1)
		return (num);
	return (num1);
}

const Fixed	&Fixed::max(const Fixed &num, const Fixed &num1)
{
	
	if (num >= num1)
		return (num);
	return (num1);
}
