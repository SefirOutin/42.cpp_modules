/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:37:05 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:43:43 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	_type = "undefined";
}

Animal::Animal(const Animal &other)
{
	_type = other._type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

const std::string Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "undefined sound" << std::endl;
}