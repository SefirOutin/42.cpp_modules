/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:37:22 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 16:39:29 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "AForm.class.hpp"
#include "ShrubberyCreationForm.class.hpp"
#include "PresidentialPardonForm.class.hpp"
#include "RobotomyRequestForm.class.hpp"
#include "Intern.class.hpp"

int	main()
{
	Bureaucrat	yes("yes", 20);
	Intern	someRandomIntern;

	AForm*	randomForm = someRandomIntern.makeForm("robotomy request", "jean");
	yes.signForm(*randomForm);
	yes.executeForm(*randomForm);
	delete randomForm;
	AForm*	randomForm2 = someRandomIntern.makeForm("robotomyddddd request", "jean");
	delete randomForm2;
	return (0);
}