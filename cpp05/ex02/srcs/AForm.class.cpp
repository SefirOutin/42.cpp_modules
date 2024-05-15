/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:29:15 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 16:02:32 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.class.hpp"

AForm::AForm(std::string name, int gradeToSign, int gradeToExec):
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

AForm::AForm(const AForm &other):
	_name(other._name),
	_gradeToSign(other._gradeToSign),
	_gradeToExec(other._gradeToExec)
{
	_signed = false;
}

AForm::~AForm()
{
	
}

AForm &AForm::operator=(const AForm &other)
{
	if (this == &other)
		return (*this);
	return (*this);
}

std::string	AForm::getName() const
{
	return (_name);
}

bool			AForm::getSigned() const
{
	return (_signed);
}

int			AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int			AForm::getGradeToExec() const
{
	return (_gradeToExec);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	_signed = true;
}

std::ostream&	operator<<(std::ostream& outs, const AForm &input)
{
	outs << input.getName() << ", signed: " << input.getSigned()
		<< ", grade to sign it: " << input.getGradeToSign()
		<< ", grade to execute it: " << input.getGradeToExec();
	return (outs);
}
