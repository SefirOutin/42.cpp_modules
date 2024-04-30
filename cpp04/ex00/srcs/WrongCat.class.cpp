/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:03:43 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:38:51 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat():
	WrongAnimal()
{
	std::cout << "Wrong Cat constructor called" << std::endl;
	_type = "Cat";
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong Cat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "wrong MIAOU" << std::endl;
}