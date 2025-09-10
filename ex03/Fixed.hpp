/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:56:01 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/10 14:23:47 by smarquez         ###   ########.fr       */
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
        Fixed getX()const;
        Fixed getY()const;

        
        float toFloat(void)const;
        int toInt(void)const;
        
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

        //Pre-increment
        Fixed &operator++(); //devuelve & porque el objeto ya  esta modificado..
        Fixed &operator--();

        //Post-increment
        Fixed operator++(int); //devuelve fixed(copia) porque necesito devolver el original.
        Fixed operator--(int);


        //Min and max

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);

        //tenemos constantes y normales pporque a veces trabbajamos con objetos modifcables y otras con constantes.

        
    private:
        int fixedNumberValue;
        static const int fractional = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif