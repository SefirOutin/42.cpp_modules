/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:36:27 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 14:53:13 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.class.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm(target, 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeToLowException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}