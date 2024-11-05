/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:29:58 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/05 19:21:38 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Utils.cpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact	contactList[8];
		int		index;

	public:
		PhoneBook();
		~PhoneBook();

		void	AddContact(std::string firstName, std::string lastName, std::string nickname,
					std::string phoneNumber, std::string darkestSecret);
		void	Search();
		void	Print();
};

#endif
