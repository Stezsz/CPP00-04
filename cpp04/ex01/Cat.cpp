/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:24:59 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:24:59 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	type = "Cat";
	_b = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
	_b = new Brain(*cat._b);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this != &cat) {
		Animal::operator=(cat);
		if (_b)
			delete _b;
		_b = new Brain(*cat._b);
	}
	std::cout << "Cat copy assignment called" << std::endl;
	return *this;
}

Cat::~Cat(void) {
	delete _b;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const {
	std::cout << "Cat meows" << std::endl;
}

void Cat::setIdea(std::string newIdea) {
	_b->setIdea(newIdea);
}

void	Cat::showIdeas(void) {
	std::cout << "Cat's brain address: " << _b << std::endl;
	for (size_t i = 0; i < _b->getSize(); i++) {
		std::cout << (*_b)[i] << std::endl;
	}
}
