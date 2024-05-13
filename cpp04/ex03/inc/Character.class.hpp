/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:37:15 by soutin            #+#    #+#             */
/*   Updated: 2024/05/02 12:20:22 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.class.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(const Character &other);
		~Character();

		Character &operator=(const Character &other);

		const std::string &getName() const;
		AMateria *getSlot(int idx) const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
	private:
		AMateria *_slot[4];
		std::string	_name;
};

#endif