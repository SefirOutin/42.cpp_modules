/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:28:01 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:29:51 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.class.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(const Form &other);
		~Form();

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		Form &operator=(const Form &other);

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		void	beSigned(const Bureaucrat &b);
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
		
};

std::ostream&	operator<<(std::ostream& outs, const Form &input);


#endif