/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:49:02 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/05 19:57:25 by natalia       ########   odam.nl         */
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
	int	contactIndex;
	bool contactFound = false;

	if (index == 1)
	{
		std::cout << "The PhoneBook is currently empty" << std::endl;
		return ;
	}
	this->Print();
	std::cout << "Provide the Contact's index you want the details: ";
	while (!(std::cin >> contactIndex))
	{
		std::cout << "Invalid input. Please enter a valid contact index number: ";
		std::cin.clear(); // Clear the error flag on cin
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
	}
	for (int i = 0; i < 8; i++)
	{
		if (contactList[i].GetIndex() == contactIndex) {
			contactList[i].Print();
			contactFound = true;
		}
	}
	if (!contactFound)
		std::cout << "This contact's index is empty" << std::endl;
}

void PhoneBook::Print()
{
	std::cout << "   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	for (int i = 0; i < 8 && i < (index - 1); i++)
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
	}
}
