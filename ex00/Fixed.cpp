/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:10 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/08 13:21:42 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedNumberValue = 0;
}
Fixed::(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    
}

Fixed::operator=()

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixedNumberValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixedNumberValue = raw;
}

