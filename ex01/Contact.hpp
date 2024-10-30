/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: natalia <natalia@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/30 13:10:04 by natalia       #+#    #+#                 */
/*   Updated: 2024/10/30 18:21:53 by natalia       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
		~Contact();

		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNickname();
		std::string	GetSecret();
		std::string	GetPhoneNumber();
		int			GetIndex();

		void	SetFirstName(std::string firstName);
		void	SetLastName(std::string lastName);
		void	SetNickname(std::string nickename);
		void	SetPhoneNumber(std::string phoneNumber);
		void	SetSecret(std::string darkestSecret);
		void	SetIndex(int index);
};

#endif
