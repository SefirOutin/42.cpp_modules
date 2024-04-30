/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:53:04 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 15:19:31 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name): 
	ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	_health = 100;
	_mana = 50;
	_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!_health || !_mana)
		return ;
	_mana--;
	std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _damage << " points of damage !" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << _name << " is now in Gate keeper mode" << std::endl;
}