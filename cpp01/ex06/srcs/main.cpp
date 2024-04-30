/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:17:54 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 19:21:28 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	lookup(const std::string level)
{
	if (level == "DEBUG")
		return 0;
	if (level == "INFO")
		return 1;
	if (level == "WARNING")
		return 2;
	if (level == "ERROR")
		return 3;
	return -1;
}

int	main(int ac, char **av)
{
	Harl 		harl;
	std::string	level;
	
	if (ac != 2)
	{
		std::cout << "wrong nb of params" << std::endl;
		return 1;
	level = av[1];
	}
	switch (lookup(level))
	{
		case -1:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
	}
	
}