/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:29:35 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:27:25 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat();

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
		
		Bureaucrat &operator=(const Bureaucrat &other);

		const std::string	&getName() const;
		const int			&getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream&	operator<<(std::ostream& outs, const Bureaucrat &input);
void	checkGrade(int grade);

#endif