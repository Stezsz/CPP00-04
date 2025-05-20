/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 13:08:40 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/19 13:08:40 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main(void) {
	const Point	a(-4.0, 2.0);
	const Point	b(-2.0, 6.0);
	const Point	c(-6.0, 4.0);
	const Point	p(-4.0, 4.0);

	std::cout << "can point a(" << a.getX() << ", " << a.getY() << ") | ";
	std::cout << "can point b(" << b.getX() << ", " << b.getY() << ") | ";
	std::cout << "can point c(" << c.getX() << ", " << c.getY() << ") form a triangle? " << isTriangle(a, b, c) << std::endl;
	std::cout << "is point p(" << p.getX() << ", " << p.getY() << ") " << "inside the triangle? " << bsp(a, b, c, p) << std::endl;
	return 0;
}
