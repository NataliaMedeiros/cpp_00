/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:59:26 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/05 19:22:09 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (true)
	{
		std::cin >> input;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			phoneBook.AddContact(GetFieldInput("First Name"), GetFieldInput("Last Name"),
								GetFieldInput("Nickname"), GetFieldInput("Phone Number"),
								GetFieldInput("Darkest Secret"));
		else if (input == "SEARCH")
			phoneBook.Search();
		else
			std::cout << "Please type one of the follor options: ADD, SEARCH or EXIT" << std::endl;
		std::cout << ">>";
	}
	std::cout << std::endl;
	return (0);
}
