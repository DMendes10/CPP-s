/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:04:25 by diomende          #+#    #+#             */
/*   Updated: 2026/01/20 19:13:23 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		int arrayPosition;
		Contact ArrayofContacts[10];
	public:
		PhoneBook();
		~PhoneBook();
		void addNewContact();
		void searchContacts();
		void exitPhoneBook();
		bool isValidNumber(std::string s);
};

#endif