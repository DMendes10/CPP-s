/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:04:46 by diogo             #+#    #+#             */
/*   Updated: 2026/01/26 16:23:04 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    std::cout << "zombie created" << std::endl;
}

Zombie::Zombie(std::string name){
    this->name = name;
}

void Zombie::setName(std::string name){
    Zombie::name = name;
}

Zombie::~Zombie(){
    std::cout << name << " killed" << std::endl;
}

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
