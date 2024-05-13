/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:40:53 by soutin            #+#    #+#             */
/*   Updated: 2024/05/07 16:06:32 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"

Character::Character(std::string name):
	_name(name)
{
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

Character::Character(const Character &other)
{
	_name = other._name;
	for (int i = 0; i < 4; i++)
	{
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
		else
			_slot[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i])
			delete _slot[i];
	}
}

const std::string &Character::getName() const
{
	return (_name);
}

AMateria *Character::getSlot(int idx) const
{
	if (idx < 0 || idx > 3)
		return (NULL);
	return (_slot[idx]);
}

Character &Character::operator=(const Character &other)
{
	_name = other._name;
	this->~Character();
	for (int i = 0; i < 4; i++)
	{
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
		else
			_slot[i] = NULL;
	}	
	return (*this);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] == m)
			return ;
		if (!_slot[i])
		{
			_slot[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !_slot[idx])	
		return ;
	_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= 4 || !_slot[idx])	
		return ;
	_slot[idx]->use(target);
}
