/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:11:15 by soutin            #+#    #+#             */
/*   Updated: 2024/04/29 19:10:12 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(const std::string &type):
	_type(type)
{
}

// AMateria::AMateria(const AMateria &other)
// {
// }

AMateria::~AMateria()
{
	
}

// AMateria	&AMateria::operator=(const AMateria &other)
// {
// 	return (*this);
// }

const std::string &AMateria::getType() const
{
	return (_type);	
}

void 		AMateria::use(ICharacter &target)
{
	(void)target;
}