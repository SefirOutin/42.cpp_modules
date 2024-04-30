/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:07:31 by soutin            #+#    #+#             */
/*   Updated: 2024/04/12 16:27:05 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "string address: " << &string << std::endl
		<< "stringPTR address held: " << stringPTR << std::endl
		<< "stringREF address held: " << &stringREF << std::endl
		<< "value of string: " << string << std::endl
		<< "value of stringPTR: " << *stringPTR << std::endl
		<< "value of stringREF: " << stringREF << std::endl;
	
}