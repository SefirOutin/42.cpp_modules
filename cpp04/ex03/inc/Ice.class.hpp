/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:54:40 by soutin            #+#    #+#             */
/*   Updated: 2024/04/29 14:52:42 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &other);

		Ice &operator=(const Ice &other);
		
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif