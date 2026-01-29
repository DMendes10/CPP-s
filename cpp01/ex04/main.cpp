/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:13:12 by diogo             #+#    #+#             */
/*   Updated: 2026/01/29 17:13:20 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

std::string findAndReplace(std::string line, std::string find, std::string replace)
{
    size_t position = 0, findLenght = find.length();
    
    while (line.find(find) !=  std::string::npos)
    {
        position = line.find(find);
        line.erase(position, findLenght);
        line.insert(position, replace);
        position += replace.length();
    }
    return (line);
}

int main (int ac, char **av)
{
    std::ifstream inFile (av[1]);
    std::string outFileName = av[1];
    std::string outFileExt = outFileName + ".replace";
    std::ofstream outFile (outFileExt);
    std::string line;
    if (ac != 4)
    {
        std::cout << "wrong number of arguments" << std::endl;
        return (1);
    }
    if (!inFile.is_open())
    {
        std::cout << "Failed to open Infile" << std::endl;
        return (1);
    }
    
    if (av[2][0])
    {
        std::cout << "ola mpt \n";
        while (std::getline(inFile, line))
        {
            line = findAndReplace (line, av[2], av[3]);
            outFile << line << std::endl;
        }
    }
    else
    {
        while (std::getline(inFile, line))
            outFile << line << std::endl;    
    }
    inFile.close();
    return (0);
}

