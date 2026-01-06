/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:51:16 by diomende          #+#    #+#             */
/*   Updated: 2026/01/06 17:22:46 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i = 0;
	int j = 1;
	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			char letter = toupper(av[j][i]);
			std::cout << letter;
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return (0);
}