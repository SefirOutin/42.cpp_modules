/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:19:15 by soutin            #+#    #+#             */
/*   Updated: 2024/04/12 13:54:01 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{

}

Contact::Contact(std::string fName, std::string lName, std::string nickname, std::string phoneNb, std::string darkestSecret):
    _fName(fName),
    _lName(lName),
    _nickname(nickname),
    _phoneNb(phoneNb),
    _darkestSecret(darkestSecret)
{

}

Contact::~Contact(void)
{

}

void    Contact::displayContact()
{
    std::cout << "First name : " << _fName << std::endl;
    std::cout << "Last name : " << _lName << std::endl;
    std::cout << "Nickname : " << _nickname << std::endl;
    std::cout << "Phone number : " << _phoneNb << std::endl;
    std::cout << "Darkest secret : " << _darkestSecret << std::endl;
}

std::string Contact::getFName() const
{
    return _fName;
}

void    Contact::setFName(std::string new_str)
{
    _fName = new_str;
}

std::string Contact::getLName() const
{
    return _lName;
}

void    Contact::setLName(std::string new_str)
{
    _lName = new_str;
}
std::string Contact::getNickname() const
{
    return _nickname;
}

void    Contact::setNickname(std::string new_str)
{
    _nickname = new_str;
}
std::string Contact::getPhoneNb() const
{
    return _phoneNb;
}

void    Contact::setPhoneNb(std::string new_str)
{
    _phoneNb = new_str;
}
std::string Contact::getDarkestSecret() const
{
    return _darkestSecret;
}

void    Contact::setDarkestSecret(std::string new_str)
{
    _darkestSecret = new_str;
}
