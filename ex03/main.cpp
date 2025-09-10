/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:59:15 by smarquez          #+#    #+#             */
/*   Updated: 2025/09/10 16:16:00 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"


bool bsp(Point const a, Point const b, Point const c, Point const point);
float getArea(Point const a, Point const b, Point const c);

int main()
{
    Point a(0,0);
    Point b(4,0);
    Point c(0, 3);

    Point point(2, 0);
    Point point2(5, 5);
    Point point3(1, 1);

    std::cout << "In a border: " << bsp(a, b, c, point) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, point2) << std::endl;
    std::cout << "Inside : " << bsp(a, b, c, point3) << std::endl;

    return(0);
}
