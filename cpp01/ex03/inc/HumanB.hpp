/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:02:43 by soutin            #+#    #+#             */
/*   Updated: 2024/04/15 19:06:27 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon& type);
		~HumanB();
		
		void	setWeapon(Weapon& newType);
		void	attack();

	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif