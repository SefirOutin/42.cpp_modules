/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:03:22 by soutin            #+#    #+#             */
/*   Updated: 2024/04/30 16:17:43 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog():
	AAnimal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	AAnimal::operator=(other);
	_brain = new Brain(*other._brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	AAnimal::operator=(other);
	delete _brain;
	_brain = new Brain(*other._brain);
	return (*this);
}

Brain	*Dog::getBrain()
{
	return (_brain);
}

void	Dog::makeSound() const
{
	std::cout << "WOAF WOAF" << std::endl;
}

void	Dog::f()
{
	
}
