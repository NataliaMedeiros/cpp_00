/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:28:34 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/05 19:23:43 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(int index, std::string firstName, std::string	lastName, std::string	nickname,
				std::string	darkestSecret, std::string	phoneNumber)
{
	this->index = index;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->darkestSecret = darkestSecret;
	this->phoneNumber = phoneNumber;
}

Contact::~Contact()
{
}

std::string	Contact::GetFirstName()
{
	return(this->firstName);
}

std::string	Contact::GetLastName()
{
	return (this->lastName);
}

std::string	Contact::GetNickname()
{
	return (this->nickname);
}

std::string	Contact::GetPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::GetDarkestSecret()
{
	return (this->darkestSecret);
}

int	Contact::GetIndex()
{
	return (this->index);
}

void	Contact::Print()
{
	std::cout << "Index: " << GetIndex() << std::endl;
	std::cout << "First Name: " << GetFirstName() << std::endl;
	std::cout << "Last Name: " << GetLastName() << std::endl;
	std::cout << "Nickname: " << GetNickname() << std::endl;
	std::cout << "Phone Number: " << GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << GetDarkestSecret() << std::endl;
}
