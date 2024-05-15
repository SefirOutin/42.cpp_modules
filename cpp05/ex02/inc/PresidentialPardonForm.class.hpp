/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:35:27 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 14:52:45 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.class.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

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