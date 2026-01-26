/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:36:45 by diogo             #+#    #+#             */
/*   Updated: 2026/01/26 16:43:52 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int hordeSize = 5;
    
    Zombie* horde = zombieHorde (5, "Gustavo");
    
    for (int i = 0; i < hordeSize; i++){
        horde[i].announce();
    }
    delete[] horde;
}
