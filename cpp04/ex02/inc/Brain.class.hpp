/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:47:23 by soutin            #+#    #+#             */
/*   Updated: 2024/04/29 15:42:41 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();

		Brain	&operator=(const Brain &other);

		void		setIdea(int index, const std::string &str);
		std::string getIdeas(int index);
	
	private:
		std::string _ideas[100];
};

#endif