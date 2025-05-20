/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:19:18 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/20 13:19:18 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0) {

}

Point::Point(float a, float b): _x(a), _y(b) {

}

Point::Point(const Point &point): _x(point._x), _y(point._y) {

}

Point::~Point(void) {

}

Point &Point::operator=(const Point &point) {
	if (this != &point)
	{
		Fixed *nonConstX = const_cast<Fixed *>(&_x);
		Fixed *nonConstY = const_cast<Fixed *>(&_y);
		*nonConstX = point._x;
		*nonConstY = point._y;
	}
	return (*this);
}

Fixed Point::getX(void) const {
	return (_x);
}

Fixed Point::getY(void) const {
	return (_y);
}
