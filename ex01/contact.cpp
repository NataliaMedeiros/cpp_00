/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:28:34 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/30 15:08:44 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
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

bool	Contact::IsEmpty()
{
	return (this->firstName.empty());
}
