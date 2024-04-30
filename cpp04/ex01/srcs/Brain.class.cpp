/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:52:07 by soutin            #+#    #+#             */
/*   Updated: 2024/04/26 12:43:46 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = other._ideas[i];
	return (*this);
}

void	Brain::setIdea(int index, const std::string &str)
{
	if (index < 0 || index > 100)
		return ;
	_ideas[index] = str;
}

std::string Brain::getIdeas(int index)
{
	return (_ideas[index]);
}
