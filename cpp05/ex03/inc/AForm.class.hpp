/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:28:01 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:29:30 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.class.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string name, int gradeToSign, int gradeToExec);
		AForm(const AForm &other);
		virtual ~AForm();

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

		AForm &operator=(const AForm &other);

		std::string	getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;

		void			beSigned(const Bureaucrat &b);
		virtual void 	execute(Bureaucrat const & executor) const = 0;
		
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
		
};

std::ostream&	operator<<(std::ostream& outs, const AForm &input);


#endif