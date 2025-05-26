/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:28:55 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:28:55 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	type = "WrongAnimal";
	std::cout << "WrongAnimal " << type << " default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	type = wrongAnimal.type;
	std::cout << "WrongAnimal " << type << " copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	if (this != &wrongAnimal)
		type = wrongAnimal.type;
	std::cout << "WrongAnimal " << type << " copy assignment called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal " << type << " destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal does not make a sound" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return type;
}
