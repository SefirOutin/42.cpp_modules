/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:20:10 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 19:26:54 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):
	_name(name)
{
	_weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon& type):
	_name(name),
	_weapon(&type)
{
	
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon& newType)
{
	_weapon = &newType;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with their fists" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}