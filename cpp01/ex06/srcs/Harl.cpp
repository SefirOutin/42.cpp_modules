/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:06:04 by soutin            #+#    #+#             */
/*   Updated: 2024/04/17 15:53:44 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	_ptr[0] = &Harl::debug;
	_ptr[1] = &Harl::info;
	_ptr[2] = &Harl::warning;
	_ptr[3] = &Harl::error;
	_strs[0] = "DEBUG";
	_strs[1] = "INFO";
	_strs[2] = "WARNING";
	_strs[3] = "ERROR";
}

Harl::~Harl()
{
}

void Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
				<< "7XL-double-cheese-triple-pickle-special-"
				<< "ketchup burger. I really do!" 
				<< std::endl << std::endl;
}

void Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon"
				<< "costs more money. You didn’t put enough bacon"
				<< "in my burger! If you did, I wouldn’t be asking for more!" 
				<< std::endl << std::endl;
}

void Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon "
				<< "for free. I’ve been coming for"
				<< "years whereas you started working here since last month."
				<< std::endl << std::endl;
}

void Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now."
				<< std::endl << std::endl;
}


void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == _strs[i])
			(this->*_ptr[i])();
	}
}