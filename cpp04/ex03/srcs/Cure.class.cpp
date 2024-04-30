/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:53:14 by soutin            #+#    #+#             */
/*   Updated: 2024/04/29 19:10:24 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure():
	AMateria("cure")
{
	
}

// Cure::Cure(const Cure &other):
// 	AMateria("cure")
// {
// }

// Cure	&Cure::operator=(const Cure &other)
// {
// 	return (*this);
// }

AMateria *Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
