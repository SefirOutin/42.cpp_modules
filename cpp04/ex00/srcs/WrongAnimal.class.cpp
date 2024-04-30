/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:09:50 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:42:28 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "wrong Animal constructor called" << std::endl;
	_type = "undefined";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal destructor called" << std::endl;
}

const std::string WrongAnimal::getType() const
{
	return (_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "wrong undefined sound" << std::endl;
}