/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:03:44 by soutin            #+#    #+#             */
/*   Updated: 2024/05/07 16:08:43 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "Character.class.hpp"
#include "AMateria.class.hpp"
#include "ICharacter.class.hpp"
#include "MateriaSource.class.hpp"

int main()
{
	AMateria	*garbage[10];
	IMateriaSource* src = new MateriaSource();
	Ice *ice = new Ice();
	src->learnMateria(ice);
	src->learnMateria(ice);
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	garbage[0] = static_cast<Character *>(me)->getSlot(0);
	me->unequip(0);
	me->use(0, *bob);
	*static_cast<Character *>(bob) = *static_cast<Character *>(me);
	bob->use(1, *me);
	tmp = src->createMateria("currrgrgg");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	delete tmp;
	delete garbage[0];
	delete bob;
	delete me;
	delete src;
	return 0;
}