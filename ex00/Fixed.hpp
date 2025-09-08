/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:47:41 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/08 10:53:06 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

class  Fixed
{
    public:
        Fixed();
        ~Fixed();


        int getRawBits(void) const;
        void setRawBits(int const raw);


    private:
        int fixedNumberValue;
        static const int fractional;




    
}