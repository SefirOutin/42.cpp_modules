#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <cstdlib>

class Zombie
{
	public :
		Zombie(const std::string &name = "No name");
		~Zombie();
		
		void	announce();
		void    setName(std::string newName);

	private :
		std::string	_name;
};

void 	randomChump(std::string name);
Zombie  *newZombie(std::string name);
Zombie    *zombieHorde(int n, std::string name);

#endif