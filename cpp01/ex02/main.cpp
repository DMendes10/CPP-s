/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 19:36:45 by diogo             #+#    #+#             */
/*   Updated: 2026/01/26 17:03:24 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string.h>
# include <iostream>

int main(){
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string &stringREF = str;

    std::cout << &str << std::endl << stringPTR << std::endl << &stringREF << std::endl;
    
    std::cout << str << std::endl << *stringPTR << std::endl << stringREF << std::endl;

    stringREF = "NO, THIS IS GUT";
    
    std::cout << &str << std::endl << stringPTR << std::endl << &stringREF << std::endl;
    
    std::cout << str << std::endl << *stringPTR << std::endl << stringREF << std::endl;
}
