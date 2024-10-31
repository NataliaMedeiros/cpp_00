/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:29:58 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/31 13:38:44 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact	contactList[8];
		int		index;

	public:
		PhoneBook();
		~PhoneBook();
		void	Add();
		void	Search();
		void	PrintContacts();
};

#endif
