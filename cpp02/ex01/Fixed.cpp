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
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n) {
	_rawBits = (n << _fractionalBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) {
	_rawBits = roundf(n * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fix) {
	_rawBits = fix._rawBits;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &fix) {
	if (this != &fix)
		_rawBits = fix._rawBits;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

float	Fixed::toFloat(void) const {
	return ((float)_rawBits / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const {
	return (_rawBits >> _fractionalBits);
}

void	Fixed::setRawBits(int const raw) {
	_rawBits = raw;
}

int		Fixed::getRawBits(void) const {
	return (_rawBits);
}

std::ostream	&operator<<(std::ostream &out, const class Fixed &fix) {
	out << fix.toFloat();
	return (out);
}
