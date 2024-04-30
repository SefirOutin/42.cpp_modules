/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:54:11 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 14:12:49 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "../inc/Fragtrap.hpp"

void	old_test()
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

int	main()
{
	old_test();
	std::cout << "---------------------------------------------------" << std::endl;
	FragTrap	fragTrap("Michel");	

	std::cout << fragTrap.getName() << " has " << fragTrap.getHealth() << "hp" << std::endl;
	fragTrap.attack("J-J");
	fragTrap.takeDamage(20);
	std::cout << fragTrap.getName() << " has " << fragTrap.getHealth() << "hp" << std::endl;
	fragTrap.beRepaired(10);
	std::cout << fragTrap.getName() << " has " << fragTrap.getHealth() << "hp" << std::endl;
	fragTrap.highFivesGuys();
}