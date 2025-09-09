/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:06:34 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/09 12:40:53 by smarquez         ###   ########.fr       */
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

        float toFloat(void)const;
        int toInt(void)const;
        




    private:
        int fixedNumberValue;
        static const int fractional = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif