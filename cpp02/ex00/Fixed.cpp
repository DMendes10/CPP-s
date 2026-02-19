/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogo <diogo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:41:27 by diogo             #+#    #+#             */
/*   Updated: 2026/02/19 16:52:53 by diogo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    Fixed::FpValue = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed& Fixed::operator=(const Fixed& copy)
{
    if (this != &copy)
        FpValue = copy.FpValue;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
} 
Fixed::Fixed(const Fixed& copy)
{
    *this = copy;
    std::cout << "Copy constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
}
int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return (FpValue);
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    FpValue = raw;
}