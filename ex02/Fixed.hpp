/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:23:18 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/09 13:39:16 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP



#include <iostream>
#include <cmath>


class Fixed
{
    public:
        Fixed();
        Fixed(const int intNumber);
        Fixed(const float floatNum);
        Fixed (const Fixed &copy); //copy constructor
        Fixed &operator=(const Fixed &copy);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);

        // float toFloat(void)const;
        // int toInt(void)const;
        
        //comparison
        bool operator>(const Fixed &copy)const;
        bool operator<(const Fixed &copy)const;
        bool operator>=(const Fixed &copy)const;
        bool operator<=(const Fixed &copy)const;
        bool operator==(const Fixed &copy)const;
        bool operator!=(const Fixed &copy)const;

        //aritmetic
        Fixed operator+(const Fixed &copy)const;
        Fixed operator-(const Fixed &copy)const;
        Fixed operator*(const Fixed &copy)const;
        Fixed operator/(const Fixed &copy)const;






    private:
        int fixedNumberValue;
        static const int fractional = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif