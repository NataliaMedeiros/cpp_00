/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:49:02 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/30 16:54:51 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
}

PhoneBook::~PhoneBook()
{
	std::cout << "***Finishing the Phonebook";
}
void PhoneBook::Add()
{
	std::string firstName, lastName, nickname, phoneNumber, secret, res;
	int	i;
	int	index;

	i = 0;
	while (!this->contactList[i].IsEmpty() && i != 7)
		i++;
	index = i + 1;
	if (!this->contactList[7].IsEmpty())
	{
		// std::cout << "The phonebook is full, the oldest contact will be replaced" << std::endl;
		std::cout << "The phonebook is full, do you want to replace the oldest contact?(yes/no)" << std::endl;
		std::cin >> res;
		while (res != "yes" && res != "no")
		{
			std::cout << "Type yes or no" <<std::endl;
			std::cin >> res;
		}
		if (res == "no")
			return ;
		int	max_index = 0;
		int j = 0;
		while (j <=7 )
		{
			if (this->contactList[j].GetIndex() > max_index)
				max_index = this->contactList[j].GetIndex();
			j++;
		}
		j = 0;
		std::cout << "Max index: "; std::cout << max_index << std::endl;
		int min_index = max_index;
		while(j <= 7)
		{
			if (this->contactList[j].GetIndex() < min_index)
				min_index = this->contactList[j].GetIndex();
			j++;
		}
		std::cout << "Min index: "; std::cout << min_index << std::endl;
		i = min_index - 1;//erro nessa linha
		index = min_index + max_index - i;
		if (min_index == 1)
			index = min_index + max_index;
		std::cout << "index: "; std::cout << index << std::endl;
	}
	std::cout << "i: "; std::cout << i << std::endl;
	std::cout << "First Name: ", std::cin >> firstName;
	// std::cout << "Last Name: ", std::cin >> lastName;
	// std::cout << "Nickname: ", std::cin >> nickname;
	// std::cout << "Phone Number: ", std::cin >> phoneNumber;
	// std::cout << "Darkest Secret: ", std::cin >> secret;

	this->contactList[i].SetIndex(index);
	this->contactList[i].SetFirstName(firstName);
	// this->contactList[i].SetLastName(lastName);
	// this->contactList[i].SetNickname(nickname);
	// this->contactList[i].SetPhoneNumber(phoneNumber);
	// this->contactList[i].SetSecret(secret);

	// std::cout << this->contactList[i].GetFirstName() << std::endl;
	// std::cout << this->contactList[i].GetLastName() << std::endl;
	// std::cout << this->contactList[i].GetNickname() << std::endl;
	// std::cout << this->contactList[i].GetPhoneNumber() << std::endl;
	// std::cout << this->contactList[i].GetSecret() << std::endl;
}

void PhoneBook::Search()
{
	this->PrintContacts();
}

void PhoneBook::Exit()
{

}

void PhoneBook::PrintContacts()
{
	int	i;

	i = 0;
	std::cout << "Index | First Name | Last Name | Nickname" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	while (i <= 7) //can I use for loop?
	{
		std::cout << this->contactList[i].GetIndex(); std::cout << " | ";
		std::cout << this->contactList[i].GetFirstName() << std::cout << " | ";
		std::cout << this->contactList[i].GetLastName() << std::cout << " | ";
		std::cout << this->contactList[i].GetNickname() << std::cout << " | ";
		std::cout << std::endl;
		// std::cout << "-----------------------------------------" << std::endl;
		i++;
	}
}
int PhoneBook::GetOldestIndex()
{
	int	oldestIndex;

	oldestIndex = 8;
	// while(j <= 7)
	// 	{
	// 		if (this->contactList[j].GetIndex() < min_index)
	// 			min_index = this->contactList[j].GetIndex();
	// 		j++;
	// 	}
	// 	std::cout << "Min index: "; std::cout << min_index << std::endl;
	return (oldestIndex);
}