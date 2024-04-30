/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:36:18 by soutin            #+#    #+#             */
/*   Updated: 2024/04/25 15:52:15 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		
		AAnimal	&operator=(const AAnimal &other);
		
		const std::string getType() const;
		
		virtual void	makeSound() const;
		
	protected:
		std::string _type;
	
	private:
		virtual void f() = 0;
};




#endif