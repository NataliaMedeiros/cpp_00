/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:29:58 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/30 18:14:55 by natalia       ########   odam.nl         */
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
		void	Exit();
		void	PrintContacts();
		int		GetOldestIndex();
};

#endif
