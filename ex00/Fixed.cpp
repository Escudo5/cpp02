/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:52:10 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/10 15:21:21 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedNumberValue = 0;
}
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    fixedNumberValue = copy.fixedNumberValue;
}

// el valor del numero de este objeto (b) = el valor del objeto de a.
//copy es un alias para a.
//copy.fixedNuberValue == a.fixedNumberValue.

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignmetn operator called" << std::endl;
    fixedNumberValue = copy.fixedNumberValue;
    return(*this);
}

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

