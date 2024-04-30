/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:02:07 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:41:24 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();

		Cat	&operator=(const Cat &other);

		Brain	*getBrain();
		
		void	makeSound() const;

	private:
		Brain	*_brain;
		void	f();
};

#endif