/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:03:43 by soutin            #+#    #+#             */
/*   Updated: 2024/04/30 16:17:23 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat():
	Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	Animal::operator=(other);
	_brain = new Brain(*other._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	delete _brain;
	_brain = new Brain(*other._brain);
	return (*this);
}


Brain	*Cat::getBrain()
{
	return (_brain);
}

void	Cat::makeSound() const
{
	std::cout << "MIAOU" << std::endl;
}