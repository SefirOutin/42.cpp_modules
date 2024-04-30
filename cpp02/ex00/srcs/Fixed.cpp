/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:05:45 by soutin            #+#    #+#             */
/*   Updated: 2024/04/18 16:05:08 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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
	std::cout << "getRawBits member function called" << std::endl;
	return (_val);	
}

void Fixed::setRawBits( int const raw )
{
	_val = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
