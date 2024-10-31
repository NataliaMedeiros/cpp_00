/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:28:34 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/31 11:38:51 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	// this->firstName = "";
}

Contact::~Contact()
{
}

std::string Contact::GetFirstName()
{
	return(this->firstName);
}

std::string Contact::GetLastName()
{
	return (this->lastName);
}

std::string Contact::GetNickname()
{
	return (this->nickname);
}

std::string Contact::GetPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::GetSecret()
{
	return (this->darkestSecret);
}

int Contact::GetIndex()
{
	return (this->index);
}

void	Contact::SetFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::SetLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::SetNickname(std::string nickename)
{
	this->nickname = nickename;
}

void	Contact::SetPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::SetSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

void	Contact::SetIndex(int index)
{
	this->index = index;
}

void	Contact::Resize(std::string str)
{
	int	len;

	len = str.size();
	if (len > 10)
	{
		str.resize(10);
		str[9] = '.';
		std::cout << str;
	}
	else
	{
		len = 10 - len;
		while (len > 0)
		{
			std::cout << " ";
			len--;
		}
		// AddSpaces(str);
		std::cout << str;
	}
}

void	Contact::PrintContact()
{
	// std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
	// std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Index: " << GetIndex() << std::endl;
	// std::cout << std::endl;
	std::cout << "First Name: " << GetFirstName() << std::endl;
	// std::cout << "|";
	std::cout << "Last Name: " << GetLastName() << std::endl;
	// std::cout << "|";
	std::cout << "Nickname: " << GetNickname() << std::endl;
	std::cout << "Phone Number: " << GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << GetSecret() << std::endl;
	// std::cout << "|";
	// std::cout << std::endl;
}
