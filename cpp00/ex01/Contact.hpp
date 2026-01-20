/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:07:38 by diomende          #+#    #+#             */
/*   Updated: 2026/01/16 20:02:24 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string.h>
# include <iostream>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string	phoneNumber;
		std::string darkestSecret;
	public:
		Contact();
		~Contact();
		void newContact();
		void displaySingleContact();
		void displayContactPreview(int id);
};

#endif