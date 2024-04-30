/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:07:44 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 19:26:08 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "fists";
}

Weapon::Weapon(std::string type):
	_type(type)
{
}

Weapon::~Weapon()
{

}

const std::string& Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(std::string newtype)
{
	_type = newtype;
}