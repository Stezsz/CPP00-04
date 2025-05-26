/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:13:26 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:13:26 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	type = "None";
	std::cout << "Animal " << type << " default constructor called" << std::endl;
}

Animal::Animal(const Animal &animal) {
	type = animal.type;
	std::cout << "Animal " << type << " copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this != &animal)
		type = animal.type;
	std::cout << "Animal " << type << " copy assignment called" << std::endl;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal " << type << " destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Generic animal does not make a sound" << std::endl;
}

std::string Animal::getType(void) const {
	return type;
}

void Animal::setIdea(std::string newIdea) {
	(void)newIdea;
}

void Animal::showIdeas(void) {

}
