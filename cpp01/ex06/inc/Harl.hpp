/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 17:06:08 by soutin            #+#    #+#             */
/*   Updated: 2024/04/17 15:10:06 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();

		void complain( std::string level );
		
	private:
		void	(Harl::*_ptr[4])();
		std::string	_strs[4];
		
		void debug();
		void info();
		void warning();
		void error();
};

#endif