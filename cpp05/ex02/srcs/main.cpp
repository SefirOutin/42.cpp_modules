/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:37:22 by soutin            #+#    #+#             */
/*   Updated: 2024/05/16 15:43:20 by soutin           ###   ########.fr       */
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
		Bureaucrat	paul("paul", 20);
		Bureaucrat	john("john", 150);
		ShrubberyCreationForm home("home");

		std::cout << home << std::endl;
		john.signForm(home);
		paul.signForm(home);
		paul.executeForm(home);
		john.executeForm(home);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	paul("paul", 20);
		Bureaucrat	john("john",80);
		RobotomyRequestForm robotrequest("bender");

		std::cout << robotrequest << std::endl;
		john.signForm(robotrequest);
		paul.signForm(robotrequest);
		paul.executeForm(robotrequest);
		john.executeForm(robotrequest);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	paul("paul", 5);
		Bureaucrat	john("john", 145);
		PresidentialPardonForm me("me");

		std::cout << me << std::endl;
		paul.signForm(me);
		paul.executeForm(me);
		john.executeForm(me);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (1);
	}
}