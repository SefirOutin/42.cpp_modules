/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:54:11 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 14:40:22 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main()
{
	ClapTrap	clapTrap("Michel");

	std::cout << clapTrap.getName() << " has " << clapTrap.getHealth() << "hp" << std::endl;
	clapTrap.attack("J-J");
	clapTrap.takeDamage(5);
	std::cout << clapTrap.getName() << " has " << clapTrap.getHealth() << "hp" << std::endl;
	clapTrap.beRepaired(2);
	std::cout << clapTrap.getName() << " has " << clapTrap.getHealth() << "hp" << std::endl;
	clapTrap.takeDamage(7);
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(5);
	clapTrap.attack("J-J");
	
}