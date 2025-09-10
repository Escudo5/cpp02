/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:56:40 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/10 14:33:37 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float f1, const float f2);
        Point (const Point &copy);
        // Point  &operator=(const Point &copy);      
        ~Point();

        Fixed getX()const;
        Fixed getY()const;

    private:
        const Fixed x;
        const Fixed y;
    
};


#endif