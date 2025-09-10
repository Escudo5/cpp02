/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:56:32 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/10 14:34:29 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(0), y(0)
{
}

Point::Point(const float f1, const float f2) : x(f1), y (f2)
{
}

Point::Point(const Point &copy) : x(copy.x), y(copy.y)
{
}

Fixed Point::getX()const
{
    return(x);
}

Fixed Point::getY()const
{
    return(y);
}

Point::~Point()
{
}

// Point &Point::operator=(const Point &copy)
// {
//     if (this != &copy)
//     {
//         (Fixed)this->x = copy.x;
//         (Fixed)this->y = copy.y;
//     }
//     return(*this);
// }