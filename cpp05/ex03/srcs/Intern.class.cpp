/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:20:12 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:37:19 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.class.hpp"

AForm	*newPresidentialForm(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*newRobotForm(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*newShrubberyForm(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Intern::Intern()
{
	_forms[0] = &newShrubberyForm;
	_forms[1] = &newRobotForm;
	_forms[3] = &newPresidentialForm;
	_strs[0] = "shrubbery creation";
	_strs[1] = "robotomy request";
	_strs[2] = "presidential pardon";
}

Intern::Intern(const Intern &other)
{
	_forms[0] = &newShrubberyForm;
	_forms[1] = &newRobotForm;
	_forms[3] = &newPresidentialForm;
	_strs[0] = "shrubbery creation";
	_strs[1] = "robotomy request";
	_strs[2] = "presidential pardon";
	(void)other;
}

Intern::~Intern()
{
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == _strs[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->_forms[i])(target);
		}	
	}
	std::cout << "Intern could not create an unknown form" << std::endl;
	return (NULL);
}

