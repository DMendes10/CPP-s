/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:46:09 by diogo             #+#    #+#             */
/*   Updated: 2026/01/27 17:11:39 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include "HumanA.hpp"

class HumanB
{
private:
    Weapon *mainWeapon;
    std::string name;
public:
    HumanB(std::string myname);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &a);
};

#endif