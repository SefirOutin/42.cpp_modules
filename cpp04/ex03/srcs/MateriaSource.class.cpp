/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:14:21 by soutin            #+#    #+#             */
/*   Updated: 2024/05/07 16:14:03 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_slot[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i])
			delete _slot[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return (*this);
	this->~MateriaSource();
	for (int i = 0; i < 4; i++)
	{
		if (other._slot[i])
			_slot[i] = other._slot[i]->clone();
		else
			_slot[i] = NULL;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] == type)
			return ;
		if (!_slot[i])
		{
			_slot[i] = type;
			return ;	
		}
	}
	std::cout << "Source full" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_slot[i] && _slot[i]->getType() == type)
			return (_slot[i]->clone());
	}
	std::cout << "Unknown type" << std::endl;
	return (NULL);
}
