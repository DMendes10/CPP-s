/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:43:08 by diomende          #+#    #+#             */
/*   Updated: 2026/01/06 20:28:16 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>
#include <vector>

int main()
{
	std::vector<std::string> arr = {"ola", "adeus", "byebye"};
	
	
	arr.push_back ("oioio");
	for (std::string s : arr)
	{
		std::cout << s << std::endl;
	}
	int i = arr.size();
	std::cout << i;
	// std::cout << "Quantos cm tem o teu vergalho?\n";
	// int nome = 0;
	// std::cin >> nome;
	// switch (nome)
	// {
	// 	case (1):
	// 		std::cout << nome << " cm? ahahah bue pequeno!";
	// 		break;
	// 	default:
	// 		std::cout << "nah bro isso e gigante \n";
	// }
	// std::cin >> nome;
	// std::string pnome = "olaaaaaa\n";
	// int len = pnome.size();
	// std::cout << nome ;
}