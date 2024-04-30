/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:36:18 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 19:44:54 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		
		const std::string getType() const;
		
		virtual void	makeSound() const;
		
	protected:
		std::string _type;
};




#endif