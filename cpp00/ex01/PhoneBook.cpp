/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:43:05 by diomende          #+#    #+#             */
/*   Updated: 2026/01/22 18:29:40 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->arrayPosition = 0;
};

void PhoneBook::addNewContact(){
	
	Contact a;
	a.newContact();
	if (this->arrayPosition < 8)
	{
		this->ArrayofContacts[this->arrayPosition] = a;
		this->arrayPosition++;
	}
	else
	{
		for (int i = 0; i < 7; i++)
			this->ArrayofContacts[i] = this->ArrayofContacts[i + 1];
		this->ArrayofContacts[7] = a;
	}
};

void PhoneBook::searchContacts(){

	if (this->arrayPosition == 0)
	{
		std::cout << "---------No contact added yet!------------" << std::endl << std::endl;
		return;
	}
	std::cout << "     index|first name| last name|  nickname|" << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		this->ArrayofContacts[i].displayContactPreview(i + 1);
	}
	std::cout << "What contact do you want to display? (input desired index)" << std::endl;
	std::string index;
	std::getline(std::cin, index);
	if (!isValidNumber(index))
	{
		std::cout << "Index must be a positive numeric number" << std::endl;
		return ;
	}
	int id = std::stoi(index);
	if (id > 8 || id < 1)
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	this->ArrayofContacts[id - 1].displaySingleContact();
};

bool PhoneBook::isValidNumber(std::string s){
	for (char c : s)
	{
		if (!std::isdigit(c))
			return (false);
	}
	return (true);
}
