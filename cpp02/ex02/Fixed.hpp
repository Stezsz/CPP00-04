/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:55:13 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/19 12:55:13 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &src);
		~Fixed(void);
		Fixed &operator=(const Fixed &rhs);
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
	private:
		int _rawBits;
		static const int _fractionalBits = 8;
};

Fixed	operator+(const Fixed &a, const Fixed &b);
Fixed	operator-(const Fixed &a, const Fixed &b);
Fixed	operator*(const Fixed &a, const Fixed &b);
Fixed	operator/(const Fixed &a, const Fixed &b);

bool	operator==(const Fixed &a, const Fixed &b);
bool	operator!=(const Fixed &a, const Fixed &b);
bool	operator<(const Fixed &a, const Fixed &b);
bool	operator<=(const Fixed &a, const Fixed &b);
bool	operator>(const Fixed &a, const Fixed &b);
bool	operator>=(const Fixed &a, const Fixed &b);

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif

