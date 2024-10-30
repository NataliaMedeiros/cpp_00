/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:59:26 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/30 15:00:54 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	input;

	while (1)
	{
		std::cin >> input;
		if (input == "EXIT")
			break;
		if (input == "ADD")
			phoneBook.Add();
		else if (input == "SEARCH")
			phoneBook.Search();
		std::cout << ">>";
	}
	std::cout << std::endl;
	return (0);
}
