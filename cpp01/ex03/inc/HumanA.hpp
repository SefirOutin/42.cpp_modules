/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:11:08 by soutin            #+#    #+#             */
/*   Updated: 2024/04/15 16:36:30 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA();

		void	attack();
	private:
		std::string _name;
		Weapon		&_weapon;
};

#endif