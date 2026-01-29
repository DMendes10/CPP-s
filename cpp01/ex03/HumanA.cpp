/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:46:09 by diogo             #+#    #+#             */
/*   Updated: 2026/01/27 16:50:59 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string myname, Weapon &myWeapon) : name(myname), mainWeapon(myWeapon)
{
    std::cout << "HumanA constructer called" << std::endl;
}

HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << mainWeapon.getType() << std::endl;
}