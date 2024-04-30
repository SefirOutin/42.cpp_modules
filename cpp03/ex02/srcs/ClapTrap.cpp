/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:55:17 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 14:05:07 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name):
	_name(name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	_health = 10;
	_mana = 10;
	_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
	
}

std::string	ClapTrap::getName() const
{
	return (_name);
}

size_t	ClapTrap::getHealth() const
{
	return (_health);
}

size_t	ClapTrap::getMana() const
{
	return (_mana);
}

size_t	ClapTrap::getDamage() const
{
	return (_damage);	
}

void ClapTrap::attack(const std::string& target)
{
	if (!_health || !_mana)
		return ;
	_mana--;
	std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_health)
		std::cout << "ClapTrap " << _name << " takes " << amount
			<< " points of damage !" << std::endl;
	if (_health - amount < 0)
		_health = 0;
	else
		_health -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!_health || !_mana)
		return ;
	std::cout << "ClapTrap " << _name << " is getting repaired" << std::endl;
	_mana--;
	_health += amount;

}