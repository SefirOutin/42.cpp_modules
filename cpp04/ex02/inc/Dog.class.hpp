/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:02:30 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:41:16 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();

		Dog	&operator=(const Dog &other);

		Brain	*getBrain();
		
		void	makeSound() const;

	private:
		Brain	*_brain;
		void	f();
};

#endif