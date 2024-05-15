/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.class.hpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:35:39 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 14:52:55 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.class.hpp"

class RobotomyRequestForm: public AForm
{
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("FormNotSigned");
				}
		};

		void	execute(Bureaucrat const & executor) const;
};




#endif
