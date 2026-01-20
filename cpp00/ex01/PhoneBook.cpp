/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:43:05 by diomende          #+#    #+#             */
/*   Updated: 2026/01/20 19:38:12 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->arrayPosition = 0;
};

PhoneBook::~PhoneBook(){};

void PhoneBook::addNewContact(){
	
	Contact a;
	a.newContact();
	if (this->arrayPosition < 7)
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
		std::cout << "No contact added yet" << std::endl;
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
	std::cin >> index;
	std::cin.ignore();
	if (!isValidNumber(index))
	{
		std::cout << "Index must be a numeric number" << std::endl;
		return ;
	}
	int id = std::stoi(index);
	if (id > 7 || id < 0)
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

void exitPhoneBook(){
	
};

