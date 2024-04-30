/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:55:24 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 14:04:59 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(const std::string &name);
		~ClapTrap();

		std::string	getName() const;
		size_t		getHealth() const;
		size_t		getMana() const;
		size_t		getDamage() const;
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string	_name;
		size_t		_health;
		size_t		_mana;
		size_t		_damage;
	};

#endif