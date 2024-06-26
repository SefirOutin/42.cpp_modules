/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.cpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:36:41 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:32:33 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.class.hpp"

const char *ShrubberyCreationForm::FormNotSignedException::what() const throw()
{
	return ("FormNotSigned");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
	AForm(other.getName(), 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	(void)other;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExec())
		throw GradeTooLowException();
	std::ofstream out(this->getName().append("_shrubbery").c_str());
	out << "          ,@@@@@@@," << std::endl
    	<<"   ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
    	<<",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
		<<",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
		<<"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
		<<" %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
		<<" `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
		<< "   |o|        | |         | |" << std::endl
		<< "   |.|        | |         | |" << std::endl
		<<"\\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	
}
