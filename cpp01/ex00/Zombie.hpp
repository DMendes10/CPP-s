/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:04:53 by diogo             #+#    #+#             */
/*   Updated: 2026/01/22 19:52:58 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string);
        ~Zombie();
        void announce();
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

