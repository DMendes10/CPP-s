/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 19:55:36 by diomende          #+#    #+#             */
/*   Updated: 2026/02/09 20:35:30 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (){
	std::string level;
	
	std::cout << "      Welcome to my Harl 2.0!!!!!" << std::endl;
	std::cout << "--------------Commands--------------" << std::endl;
	std::cout << "|     DEBUG (says some stuff)      |" << std::endl;
	std::cout << "|     INFO (says some stuff)       |" << std::endl;
	std::cout << "|     WARNING (says other stuff)   |" << std::endl;
	std::cout << "|     ERROR (says more stuff)      |" << std::endl;
	std::cout << "|     (CTRL+D to exit harl)        |" << std::endl;
	std::cout << "------------------------------------" << std::endl << std::endl;
	std::cout << "What would you like Harl to do?" << std::endl;
	Harl harl;
	while (getline(std::cin, level))
	{
		std::cout << "What would you like Harl to do?" << std::endl;
		harl.complain(level);
	}
	return (0);
}