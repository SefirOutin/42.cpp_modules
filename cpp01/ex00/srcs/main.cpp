/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:42:44 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 17:07:51 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie tmp;
    Zombie  *Zombie = newZombie("newZ");
    tmp.announce();
    Zombie->announce();
    randomChump("random");
    delete Zombie;
}