/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:36:18 by soutin            #+#    #+#             */
/*   Updated: 2024/04/25 15:52:02 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();
		
		Animal	&operator=(const Animal &other);
		
		const std::string getType() const;
		
		virtual void	makeSound() const;
		
	protected:
		std::string _type;
};




#endif