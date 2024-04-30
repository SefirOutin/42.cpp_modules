/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:54:11 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 13:43:35 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap scavTrap("Michel");

	std::cout << scavTrap.getName() << " has " << scavTrap.getHealth() << "hp" << std::endl;
	scavTrap.attack("J-J");
	scavTrap.takeDamage(20);
	std::cout << scavTrap.getName() << " has " << scavTrap.getHealth() << "hp" << std::endl;
	scavTrap.beRepaired(10);
	std::cout << scavTrap.getName() << " has " << scavTrap.getHealth() << "hp" << std::endl;
	scavTrap.guardGate();
}