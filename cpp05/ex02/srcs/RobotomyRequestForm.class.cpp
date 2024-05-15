/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:36:23 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 14:51:49 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm(target, 72, 45)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}


void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeToLowException();
	std::cout << "* some drilling noises *" << std::endl;
	if (std::rand() % 2)
		std::cout << this->getName() << " has been robotomized succesfully" << std::endl;
	else
		std::cout << this->getName() << "'s robotomy failed" << std::endl;
}
