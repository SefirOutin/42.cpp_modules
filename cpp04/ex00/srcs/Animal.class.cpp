/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:37:05 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:39:07 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	_type = "undefined";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

const std::string Animal::getType() const
{
	return (_type);
}

void	Animal::makeSound() const
{
	std::cout << "undefined sound" << std::endl;
}