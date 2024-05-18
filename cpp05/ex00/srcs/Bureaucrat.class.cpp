/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:34:52 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:27:16 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
	_name(name),
	_grade(grade)
{ 
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other):
	_name(other._name),
	_grade(other._grade)
{ }

Bureaucrat::~Bureaucrat()
{ }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this == &other)
		return (*this);
	_grade = other._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName() const
{
	return (_name);
}

const int			&Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

std::ostream&	operator<<(std::ostream& outs, const Bureaucrat &input)
{
	outs << input.getName() << ", bureaucrat grade: " << input.getGrade();
	return (outs);
}
