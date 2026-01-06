/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 17:43:08 by diomende          #+#    #+#             */
/*   Updated: 2026/01/06 21:01:08 by diomende         ###   ########.fr       */
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
}