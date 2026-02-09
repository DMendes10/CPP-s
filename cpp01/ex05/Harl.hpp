/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomende <diomende@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:51:52 by diogo             #+#    #+#             */
/*   Updated: 2026/02/09 19:53:53 by diomende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class Harl{
    private:
        void debug();
        void info();
        void warning();
        void error();
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};