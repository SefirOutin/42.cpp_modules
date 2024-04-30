/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:54:44 by soutin            #+#    #+#             */
/*   Updated: 2024/04/29 14:52:45 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.class.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &other);
		
		Cure &operator=(const Cure &other);
		
		AMateria *clone() const;
		void use(ICharacter &target);
};


#endif