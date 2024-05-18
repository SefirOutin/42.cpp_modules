/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:29:15 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:28:35 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.class.hpp"

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException");
}

Form::Form(std::string name, int gradeToSign, int gradeToExec):
	_name(name),
	_gradeToSign(gradeToSign),
	_gradeToExec(gradeToExec)
{ 
	if (gradeToExec < 1 || gradeToSign < 1)
		throw GradeTooHighException();
	else if (gradeToExec > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	_signed = false;
}

Form::Form(const Form &other):
	_name(other._name),
	_gradeToSign(other._gradeToSign),
	_gradeToExec(other._gradeToExec)
{
	_signed = false;
}

Form::~Form()
{
	
}

Form &Form::operator=(const Form &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

std::string	Form::getName() const
{
	return (_name);
}

bool			Form::getSigned() const
{
	return (_signed);
}

int			Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int			Form::getGradeToExec() const
{
	return (_gradeToExec);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

std::ostream&	operator<<(std::ostream& outs, const Form &input)
{
	outs << input.getName() << ", signed: " << input.getSigned()
		<< ", grade to sign it: " << input.getGradeToSign()
		<< ", grade to execute it: " << input.getGradeToExec();
	return (outs);
}
