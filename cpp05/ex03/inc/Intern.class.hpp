/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 18:19:24 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 14:37:26 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &other);
		~Intern();

		Intern	&operator=(const Intern &other);

		AForm	*makeForm(std::string name, std::string target);

	private:
		std::string _strs[3];
		AForm		*(*_forms[3])(const std::string target);
		
};

#endif