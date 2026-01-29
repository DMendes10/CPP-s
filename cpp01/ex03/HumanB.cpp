/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:46:09 by diogo             #+#    #+#             */
/*   Updated: 2026/01/27 17:11:26 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string myname) : name(myname)
{
    std::cout << "contructor HumanB started" << std::endl;
}

HumanB::~HumanB()
{
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << mainWeapon->getType() << std::endl;
}
void HumanB::setWeapon (Weapon &a)
{
    mainWeapon = &a;
}