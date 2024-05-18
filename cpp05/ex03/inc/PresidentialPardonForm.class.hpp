/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.class.hpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:35:27 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:31:02 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.class.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &other);
		~PresidentialPardonForm();

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		void	execute(Bureaucrat const & executor) const;
};

#endif