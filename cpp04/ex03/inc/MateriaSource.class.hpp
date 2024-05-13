/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:05:34 by soutin            #+#    #+#             */
/*   Updated: 2024/05/07 14:40:19 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP


#include "IMateriaSource.class.hpp"
#include "AMateria.class.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();
		
		MateriaSource &operator=(const MateriaSource &other);
		
		void learnMateria(AMateria* type);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria *_slot[4];
};

#endif