/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:05:29 by soutin            #+#    #+#             */
/*   Updated: 2024/04/29 15:23:34 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef MATERIA_HPP
#define MATERIA_HPP

#include <iostream>
#include "ICharacter.class.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &other);
		virtual ~AMateria();

		AMateria			&operator=(const AMateria &other);
		
		const std::string	&getType() const; //Returns the materia type
		
		virtual AMateria	*clone() const = 0;
		virtual void 		use(ICharacter &target);
	
	protected:
		std::string _type;
};

#endif