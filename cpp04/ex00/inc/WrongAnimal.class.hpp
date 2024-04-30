/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:58:43 by soutin            #+#    #+#             */
/*   Updated: 2024/04/24 19:10:10 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		~WrongAnimal();
		
		const std::string getType() const;
		
		void	makeSound() const;
		
	protected:
		std::string _type;
};

#endif