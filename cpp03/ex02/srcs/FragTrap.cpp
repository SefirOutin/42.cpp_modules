/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:49:47 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 15:21:12 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

FragTrap::FragTrap(const std::string &name):
	ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	_health = 100;
	_mana = 100;
	_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (!_health || !_mana)
		return ;
	_mana--;
	std::cout << "FragTrap " << _name << " attacks " << target
			<< ", causing " << _damage << " points of damage !" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "high fives guys" << std::endl;
}
