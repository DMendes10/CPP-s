/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:43:08 by diomende          #+#    #+#             */
/*   Updated: 2026/01/22 18:02:01 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook awesome;
	
	std::cout << "          Welcome to my Awesome Phonebook!!!!!" << std::endl;
	std::cout << "-------------------------Commands---------------------" << std::endl;
	std::cout << "|     ADD (adds a new contact to the phonebook)      |" << std::endl;
	std::cout << "|     SEARCH (search for a contact to the phonebook) |" << std::endl;
	std::cout << "|     EXIT (Exits the program, contacts go PUF!)     |" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl << std::endl;

	while (1)
	{
		std::cout << "What do you wish to do?" << std::endl;
		if(!std::getline(std::cin, input))
			exit(0);
		else if (input == "ADD")
			awesome.addNewContact();
		else if (input == "SEARCH")
			awesome.searchContacts();
		else if (input == "EXIT")
		{
			std::cout << "Bye Bye, Your contacts are lost forever! :D" << std::endl;
			exit (0);
		}
		else
			std::cout << "Unknown command, try again! :)" << std::endl << std::endl;
	}
}
