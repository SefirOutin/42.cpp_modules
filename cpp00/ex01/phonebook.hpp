/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:19:26 by soutin            #+#    #+#             */
/*   Updated: 2024/04/10 14:15:57 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include <iostream>
#include <iomanip>

class   Contact
{
    public:
        std::string getFName() const;
        void        setFName(std::string);
        std::string getLName() const;
        void        setLName(std::string);
        std::string getNickname() const;
        void        setNickname(std::string);
        std::string getPhoneNb() const;
        void        setPhoneNb(std::string);
        std::string getDarkestSecret() const;
        void        setDarkestSecret(std::string);
        
        Contact();
        Contact(std::string, std::string, std::string, std::string, std::string);
        ~Contact();
		
        void		displayContact();
   
    private:
        std::string _fName;
        std::string _lName;
        std::string _nickname;
        std::string _phoneNb;
        std::string _darkestSecret;
};

class PhoneBook
{
    public:
        int     getNumContact() const;
		void	setNumContact(int x);
    
        PhoneBook();
        ~PhoneBook();
    
        void    search();
        void    add();
   
    private:
        Contact _contacts[8];
        int     _numContact;
};

#endif