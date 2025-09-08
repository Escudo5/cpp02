/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:47:41 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/08 13:04:02 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class  Fixed
{
    public:
        Fixed();  //constructor por defecto
        Fixed(const Fixed &copy); //constructir de copia. //const garantiza que no voy a modificar el objeto original(copy)
        Fixed &operator=(const Fixed &copy); // operador de asignacion
        ~Fixed(); //destructor


        int getRawBits(void) const;
        void setRawBits(int const raw);


    private:
        int fixedNumberValue;
        static const int fractional = 8;

    
};

#endif


// el operador de asignacion devuelve un Clase&, es una referencia a si mismo. 