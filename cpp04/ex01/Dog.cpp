/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:26:59 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:26:59 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	type = "Dog";
	_b = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
	_b = new Brain(*dog._b);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this != &dog) {
		Animal::operator=(dog);
		if (_b)
			delete _b;
		_b = new Brain(*dog._b);
	}
	std::cout << "Dog copy assignment called" << std::endl;
	return *this;
}
Dog::~Dog(void) {
	delete _b;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "Dog barks" << std::endl;
}

void	Dog::setIdea(std::string newIdea) {
	_b->setIdea(newIdea);
}

void	Dog::showIdeas(void) {
	std::cout << "Dog's brain address: " << _b << std::endl;
	for (size_t i = 0; i < _b->getSize(); i++) {
		std::cout << (*_b)[i] << std::endl;
	}
}
