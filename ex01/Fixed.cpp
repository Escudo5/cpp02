/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:50:09 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/09 13:02:40 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedNumberValue = 0;
}

Fixed::Fixed(const int intNumber)
{
    std::cout << " Int constructor called" << std::endl;
    fixedNumberValue = intNumber * 256; 
}

Fixed::Fixed (const float floatNum)
{
    std::cout << " Float constructor called" << std::endl;
    fixedNumberValue = round(floatNum * 256.0f);
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    if (this != &copy)
        fixedNumberValue = copy.fixedNumberValue;
    std::cout << "copy assingment operator called" << std::endl;
    return(*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void)const
{
   return(fixedNumberValue / 256.0f);
}

int Fixed::toInt(void)const
{
   return(fixedNumberValue / 256); 
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
  out << fixed.toFloat();
  return(out);
}