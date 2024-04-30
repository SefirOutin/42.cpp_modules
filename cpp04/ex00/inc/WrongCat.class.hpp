/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:57:37 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:38:36 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();

		void	makeSound() const;
};

#endif