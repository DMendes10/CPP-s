/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:03:16 by diogo             #+#    #+#             */
/*   Updated: 2026/02/09 20:32:58 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Default constuctor called" << std::endl;
}
Harl::~Harl(){
	std::cout << "Default destuctor called" << std::endl;
}
void Harl::debug(){
	std::cout << "I love debugging, one time I was debugging a program\
 and found out a real bug, a cockroach in my computer, we are now friends!" << std::endl;
}
void Harl::info(){
	std::cout << "Here's some fun info about me: When I was 3 years\
old I bought 3k bitcoin. I'm now a bilionaire. What did you do when you were 3?" << std::endl;
}
void Harl::warning(){
	std::cout << "I must warn you, I like Taylor Swift and I'm not ashamed about it" << std::endl;
}
void Harl::error(){
	std::cout << "To Human is Err, one old nice lady once told me after she ran me over" << std::endl;
}
void Harl::complain(std::string level){
	std::string moods[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*levels[4]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == moods[i])
		{
			(this->*levels[i])();
			return ;
		}
		
	}
	std::cout << "Thats not a valid parameter ... Honestly ... Do better" << std::endl;
	return ;
}