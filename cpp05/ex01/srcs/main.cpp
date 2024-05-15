/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:37:22 by soutin            #+#    #+#             */
/*   Updated: 2024/05/15 17:50:53 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.class.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Form	invalid("yes", 20, 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	invalid("yes", 0, 20);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	ish("pi_r", 25);
		Form		valid("yes", 20, 20);

		ish.signForm(valid);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat	ish("pi_r", 5);
		Form		valid("yes", 20, 20);

		std::cout << valid << std::endl;
		ish.signForm(valid);
		std::cout << valid << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form	valid("yes", 50, 25);
	std::cout << valid << std::endl;
	Form	copy(valid);
	std::cout << "copy " << copy << std::endl;
	
}