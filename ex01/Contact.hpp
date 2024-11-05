/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:10:04 by natalia       #+#    #+#                 */
/*   Updated: 2024/11/05 19:23:35 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	darkestSecret;
		std::string	phoneNumber;
		int			index;

	public:
		Contact();
		Contact(int index, std::string	firstName,
		std::string	lastName,
		std::string	nickname,
		std::string	darkestSecret,
		std::string	phoneNumber);
		~Contact();

		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickname();
		std::string	GetDarkestSecret();
		std::string	GetPhoneNumber();
		int			GetIndex();

		void		Print();
};

#endif
