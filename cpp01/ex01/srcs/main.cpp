/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:42:44 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 17:17:30 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	int	size;

	if (ac != 2)
		return 1;
	size = atoi(av[1]);
	Zombie *horde = zombieHorde(size, "paul");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}