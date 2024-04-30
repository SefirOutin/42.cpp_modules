/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:27:09 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 17:11:30 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name):
    _name(name)
{
   std::cout << _name  << " creation" << std::endl; 
}



Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " destroyed" << std::endl;
}

void    Zombie::setName(std::string newName)
{
    _name = newName;
}

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}