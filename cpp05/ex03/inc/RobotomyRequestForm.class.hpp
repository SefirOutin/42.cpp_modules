/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:35:39 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:33:58 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.class.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		~RobotomyRequestForm();

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);

		void	execute(Bureaucrat const & executor) const;
};




#endif
