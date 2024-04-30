/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:19:19 by soutin            #+#    #+#             */
/*   Updated: 2024/04/12 13:52:20 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(void)
{
    std::string input;
    PhoneBook   PhoneBook;

	PhoneBook.setNumContact(0);
	while (!std::cin.eof())
	{
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, input, '\n');
		if (input == "ADD")
			PhoneBook.add();
		else if (input == "SEARCH")
			PhoneBook.search();
		else if (input == "EXIT")
		    return 0;
	}
    return (0);
}
