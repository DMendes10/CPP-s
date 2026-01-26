/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:04:53 by diogo             #+#    #+#             */
/*   Updated: 2026/01/26 16:22:13 by diogo            ###   ########.fr       */
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
        void setName(std::string name);
        ~Zombie();
        void announce();
};

Zombie* zombieHorde(int N, std::string name);

