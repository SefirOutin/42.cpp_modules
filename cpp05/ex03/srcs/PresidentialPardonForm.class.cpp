/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:36:27 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:30:55 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

const char *PresidentialPardonForm::FormNotSignedException::what() const throw()
{
	return ("FormNotSigned");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
	AForm(other.getName(), 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	(void)other;
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
