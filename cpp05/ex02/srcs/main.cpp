/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:37:22 by soutin            #+#    #+#             */
/*   Updated: 2024/05/13 16:50:38 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"

int	main()
{
	try
	{
		Bureaucrat	valid("valid", 26);
		Bureaucrat	invalid("invalid", 30);
		ShrubberyCreationForm	yes("yes");
		PresidentialPardonForm	pres("hmm");
		
		std::cout << valid << std::endl;
		valid.signForm(yes);
		valid.executeForm(yes);
		valid.signForm(pres);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}