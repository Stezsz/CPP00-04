/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:55:09 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/19 12:55:09 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0) {

}

Fixed::~Fixed(void) {

}

Fixed::Fixed(const Fixed &fix) {
	_rawBits = fix._rawBits;
}

Fixed::Fixed(const int raw) {
	_rawBits = raw << _fractionalBits;
}

Fixed::Fixed(const float raw) {
	_rawBits = roundf(raw * (1 << _fractionalBits));
}

Fixed	&Fixed::operator=(const Fixed &fix) {
	if (this != &fix)
		_rawBits = fix._rawBits;
	return (*this);
}

Fixed	&Fixed::operator++(void) {
	_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp(*this);

	_rawBits++;
	return (temp);
}

Fixed	&Fixed::operator--(void) {
	_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);

	_rawBits--;
	return (temp);
}

int		Fixed::getRawBits(void) const {
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw) {
	_rawBits = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)_rawBits / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_rawBits >> _fractionalBits);
}

Fixed	operator+(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() + rhs.toFloat()));
}

Fixed	operator-(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() - rhs.toFloat()));
}

Fixed	operator*(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() * rhs.toFloat()));
}

Fixed	operator/(const Fixed &lhs, const Fixed &rhs) {
	return (Fixed(lhs.toFloat() / rhs.toFloat()));
}

bool	operator>(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() > rhs.toFloat());
}

bool	operator<(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() < rhs.toFloat());
}

bool	operator>=(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() >= rhs.toFloat());
}

bool	operator<=(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() <= rhs.toFloat());
}

bool	operator==(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() == rhs.toFloat());
}

bool	operator!=(const Fixed &lhs, const Fixed &rhs) {
	return (lhs.toFloat() != rhs.toFloat());
}

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs) {
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs) {
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs) {
	if (lhs < rhs)
		return (rhs);
	return (lhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs) {
	if (lhs < rhs)
		return (rhs);
	return (lhs);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fix) {
	out << fix.toFloat();
	return (out);
}
