/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:36:23 by soutin            #+#    #+#             */
/*   Updated: 2024/05/18 13:17:43 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.class.hpp"

const char *RobotomyRequestForm::FormNotSignedException::what() const throw()
{
	return ("FormNotSigned");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm(target, 72, 45)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
	AForm(other.getName(), 72, 45)
{	
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	(void)other;
	return (*this);
}


void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	std::cout << "* some drilling noises *" << std::endl;
	srand(time(NULL));
	if (std::rand() % 2)
		std::cout << this->getName() << " has been robotomized succesfully" << std::endl;
	else
		std::cout << this->getName() << "'s robotomy failed" << std::endl;
}
