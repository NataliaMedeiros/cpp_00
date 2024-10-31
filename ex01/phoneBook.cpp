/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:49:02 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/31 13:38:35 by natalia       ########   odam.nl         */
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
	std::cout << "***Finishing the Phonebook";
}
void PhoneBook::Add()
{
	std::string firstName, lastName, nickname, phoneNumber, secret, res;
	int i;

	i = (index % 8 - 1) < 0 ? 7 : index % 8 -1; //if else condition in just one line
	// i = index % 8 - 1;
	// if (i < 0)
	// 	i = 7;
	// if (index > 8)
	// {
		// std::cout << "The phonebook is full, the oldest contact will be replaced" << std::endl;
		// std::cout << "The phonebook is full, do you want to replace the oldest contact?(yes/no)" << std::endl;
		// std::cin >> res;
		// while (res != "yes" && res != "no")
		// {
		// 	std::cout << "Type yes or no" <<std::endl;
		// 	std::cin >> res;
		// }
		// if (res == "no")
		// 	return ;
	// }
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "First Name: ", std::getline(std::cin, firstName);
	std::cout << "Last Name: ", std::getline(std::cin, lastName);
	std::cout << "Nickname: ", std::getline(std::cin, nickname);
	std::cout << "Phone Number: ", std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ", std::getline(std::cin, secret);

	this->contactList[i].SetIndex(index);
	this->contactList[i].SetFirstName(firstName);
	this->contactList[i].SetLastName(lastName);
	this->contactList[i].SetNickname(nickname);
	this->contactList[i].SetPhoneNumber(phoneNumber);
	this->contactList[i].SetSecret(secret);

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
	this->PrintContacts();
	std::cout << "Provide the Contact's index you want to: ", std::cin >> contact_index;
	i = (contact_index % 8 - 1) < 0 ? 7 : contact_index % 8 -1;
	if (contactList[i].GetFirstName().empty())
		std::cout << "This contact's index is empty" << std::endl;
	else
		contactList[i].PrintContact();
}

void PhoneBook::PrintContacts()
{
	int	i;

	i = 0;
	std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (i < index - 1)
	{
		contactList[i].Resize(std::to_string(contactList[i].GetIndex()));
		std::cout << "|";
		contactList[i].Resize(contactList[i].GetFirstName());
		std::cout << "|";
		contactList[i].Resize(contactList[i].GetLastName());
		std::cout << "|";
		contactList[i].Resize(contactList[i].GetNickname());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		i++;
	}
}
