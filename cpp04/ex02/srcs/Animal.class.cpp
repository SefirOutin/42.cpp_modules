/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:37:05 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:41:31 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal constructor called" << std::endl;
	_type = "undefined";
}

AAnimal::AAnimal(const AAnimal &other)
{
	_type = other._type;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return (*this);
	_type = other._type;
	return (*this);
}

const std::string AAnimal::getType() const
{
	return (_type);
}

void	AAnimal::makeSound() const
{
	std::cout << "undefined sound" << std::endl;
}