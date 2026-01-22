/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:43:29 by diomende          #+#    #+#             */
/*   Updated: 2026/01/22 18:27:15 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::newContact(){
	
	std::cout << "Insert the contact's first name" << std::endl;
	std::getline(std::cin, this->firstName);
	std::cout << "Insert the contact's last name" << std::endl;
	std::getline(std::cin, this->lastName);
	std::cout << "Insert the contact's nickname" << std::endl;
	std::getline(std::cin, this->nickname);
	std::cout << "Insert the contact's phone number" << std::endl;
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Insert the contact's darkest secret" << std::endl;
	std::getline(std::cin, this->darkestSecret);
	std::cout << "--------------Contact Added!-------------" << std::endl << std::endl;
};

void Contact::displaySingleContact(){
	std::cout << "First Name: "<< this->firstName << std::endl;
	std::cout << "Last Name: "<< this->lastName << std::endl;
	std::cout << "Nickname: "<< this->nickname << std::endl;
	std::cout << "Phone Number: "<< this->phoneNumber << std::endl;
	std::cout << "Darkest Secret: "<< this->darkestSecret << std::endl << std::endl;
};

void	Contact::displayContactPreview(int id){
	
	int fn_space = this->firstName.size() - 10;
	int ln_space = this->lastName.size() - 10;
	int nn_space = this->nickname.size() - 10;
	std::cout << "         " << id << "|";
	if (fn_space <= 0)
	{
		for (int i = fn_space; i < 0; i++)
			std::cout << " ";
		std::cout << this->firstName << "|";
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->firstName[i];
		std::cout << ".|";
	}
	if (ln_space <= 0)
	{
		for (int i = ln_space; i < 0; i++)
			std::cout << " ";
		std::cout << this->lastName << "|";
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->lastName[i];
		std::cout << ".|";
	}
	if (nn_space <= 0)
	{
		for (int i = nn_space; i < 0; i++)
			std::cout << " ";
		std::cout << this->nickname << "|" << std::endl;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << this->nickname[i];
		std::cout << ".|" << std::endl;
	}
};

Contact::Contact(){};