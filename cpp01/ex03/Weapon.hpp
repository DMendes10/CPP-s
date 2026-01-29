/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:53:49 by diogo             #+#    #+#             */
/*   Updated: 2026/01/27 16:22:33 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string weaponType);
    ~Weapon();
    const std::string& getType();
    void setType(std::string nType);
};



#endif