/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:04:25 by diomende          #+#    #+#             */
/*   Updated: 2026/01/22 18:29:29 by diogo            ###   ########.fr       */
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
		void addNewContact();
		void searchContacts();
		bool isValidNumber(std::string s);
};

#endif