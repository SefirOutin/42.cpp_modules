/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.class.hpp                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 13:34:57 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 14:53:01 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.class.hpp"

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();

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