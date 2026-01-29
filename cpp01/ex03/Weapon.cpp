/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:56:02 by diogo             #+#    #+#             */
/*   Updated: 2026/01/27 16:32:06 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType)
{
    type = weaponType;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(){
        const std::string& refType = type;
        return refType;
    }
    
    void Weapon::setType(std::string nType){
        type = nType;
    }