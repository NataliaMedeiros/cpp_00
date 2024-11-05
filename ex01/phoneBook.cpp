/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:49:02 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/05 19:23:24 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/*
cin -> get the line up to the first space
getLine -> get the role line
*/

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "***Phonebook started***" << std::endl;
	std::cout << "To operate the phonebook use one of the follow commands" << std::endl;
	std::cout << "ADD to add a new entry" << std::endl;
	std::cout << "SEARCH to look for a specific contact" << std::endl;
	std::cout << "EXIT to leave the phonebook" << std::endl;
	std::cout << "Which operation do you want to do?" << std::endl;
	std::cout << ">>";
	index = 1;
}

PhoneBook::~PhoneBook()
{
	std::cout << "***Finishing the Phonebook" << std::endl;
}

void PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickname,
						std::string phoneNumber, std::string darkestSecret)
{
	int i = (index % 8 - 1) < 0 ? 7 : index % 8 -1;

	this->contactList[i] = Contact(index, firstName, lastName, nickname, phoneNumber, darkestSecret);
	index++;
}

void PhoneBook::Search()
{
	int	contact_index;
	int	i;

	if (contactList[0].GetFirstName().empty())
	{
		std::cout << "The PhoneBook is currently empty" << std::endl;
		return ;
	}
	this->Print();
	std::cout << "Provide the Contact's index you want to: ", std::cin >> contact_index;
	i = (contact_index % 8 - 1) < 0 ? 7 : contact_index % 8 -1;
	if (contactList[i].GetFirstName().empty())
		std::cout << "This contact's index is empty" << std::endl;
	else
		contactList[i].Print();
}

void PhoneBook::Print()
{
	int	i;

	i = 0;
	std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (i < index - 1)
	{
		Resize(std::to_string(contactList[i].GetIndex()));
		std::cout << "|";
		Resize(contactList[i].GetFirstName());
		std::cout << "|";
		Resize(contactList[i].GetLastName());
		std::cout << "|";
		Resize(contactList[i].GetNickname());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		i++;
	}
}
