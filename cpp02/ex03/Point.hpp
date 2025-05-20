/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 13:20:54 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/20 13:20:54 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(float a, float b);
		Point(const Point &point);
		~Point(void);
		Point &operator=(const Point &point);
		Fixed getX(void) const;
		Fixed getY(void) const;
	private:
		const Fixed _x;
		const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
bool isTriangle(Point const a, Point const b, Point const c);

#endif
