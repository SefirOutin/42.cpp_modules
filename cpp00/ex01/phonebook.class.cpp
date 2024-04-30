/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:19:23 by soutin            #+#    #+#             */
/*   Updated: 2024/04/12 13:53:50 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{

}

PhoneBook::~PhoneBook()
{
	
}

void    PhoneBook::add()
{
    std::string input;

	input = "";
    if (_numContact > 7)
        _numContact = 0;
    while (!std::cin.eof() && input == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, input) && input != "")
			_contacts[_numContact].setFName(input);
	}
	input = "";
    while (!std::cin.eof() && input == "")
	{
    	std::cout << "Enter last name" << std::endl;
		if (std::getline(std::cin, input) && input != "")
			_contacts[_numContact].setLName(input);
	}
	input = "";
    while (!std::cin.eof() && input == "")
	{
    	std::cout << "Enter Nickname" << std::endl;
		if (std::getline(std::cin, input) && input != "")
			_contacts[_numContact].setNickname(input);
	}
	input = "";
    while (!std::cin.eof() && input == "")
	{
    	std::cout << "Enter phone number" << std::endl;
		if (std::getline(std::cin, input) && input != "")
			_contacts[_numContact].setPhoneNb(input);
	}
	input = "";
    while (!std::cin.eof() && input == "")
	{
    	std::cout << "Enter darkest secret" << std::endl;
		if (std::getline(std::cin, input) && input != "")
			_contacts[_numContact].setDarkestSecret(input);
	}
    _numContact++;
}

std::string truncate(std::string str,size_t width)
{
	if (str.length() > width)
		return str.substr(0, 9) + ".";
	return str;
}

void    PhoneBook::search()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < 8; i++)
    {
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << truncate(_contacts[i].getFName(), 10) << "|";
		std::cout << std::setw(10) << truncate(_contacts[i].getLName(), 10) << "|";
		std::cout << std::setw(10) << truncate(_contacts[i].getNickname(), 10) << "|" << std::endl;
    }
	std::string	input;
	std::cout << "Select an index" << std::endl;
	while (!std::cin.eof())
	{
		getline(std::cin, input, '\n');
		if (input.size() != 1 || (input[0] < '1' || input[0] > '8'))
			std::cout << "wrong index" << std::endl;
		else
		{
			_contacts[input[0] - '0' - 1].displayContact();
			break;
		}
	}
}

int	PhoneBook::getNumContact() const
{
	return _numContact;
}

void	PhoneBook::setNumContact(int x)
{
	_numContact = x;
}