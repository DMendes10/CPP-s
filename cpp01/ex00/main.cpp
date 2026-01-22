/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:36:45 by diogo             #+#    #+#             */
/*   Updated: 2026/01/22 20:00:45 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void examplefunc(Zombie *bro){
    bro->announce();
}

int main(){
    Zombie a;
    Zombie *b = newZombie("Mario");
    randomChump("Ricardo");
    examplefunc(b);
    // b->announce();
    delete (b);
}
