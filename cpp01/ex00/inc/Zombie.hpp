#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie
{
	public :
		Zombie(const std::string &name = "No name");
		~Zombie();

		void	announce();
	
	private :
		std::string	_name;
};

void 	randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif