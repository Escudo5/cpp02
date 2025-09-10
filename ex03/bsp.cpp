/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 14:02:48 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/10 16:10:30 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


float getArea(Point const a, Point const b, Point const c)
{
    Fixed area;
    float areaFloat;
    Fixed a1;
    Fixed b1;
    Fixed c1;

    a1 = (a.getX() * (b.getY() - c.getY()));
    b1 = (b.getX() * (c.getY() - a.getY()));
    c1 = (c.getX() * (a.getY() - b.getY()));
    
    area  = (a1 + b1 + c1);
    if (area < 0)
    area = area * (-1);
    area = area / 2;
    areaFloat = area.toFloat();
    return(areaFloat);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float ABC;
    float PBC;
    float APC;
    float ABP;
    float p;

    ABC = getArea(a, b, c);
    PBC = getArea(point, b ,c);
    APC = getArea (a, point, c);
    ABP = getArea(a, b, point);

    p = PBC + APC + ABP;
    
    if(p > ABC)
        return(false);
    if (roundf(PBC) == 0 || roundf(APC) == 0|| roundf(ABP) == 0)
        return(false);
    return(true);
    
}