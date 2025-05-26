/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:43:11 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:43:11 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	_size = 0;
	_index = 0;
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain) {
	for (size_t i = 0; i < _size; ++i)
		_ideas[i] = brain._ideas[i];
	_size = brain._size;
	_index = brain._index;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &obj) {
	if (this != &obj) {
		for (size_t i = 0; i < obj._size; i++) {
			_ideas[i] = obj._ideas[i];
		}
		_index = obj._index;
		_size = obj._size;
	}
	std::cout << "Brain copy assignment called" << std::endl;
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

void	Brain::setIdea(std::string newIdea) {
	_ideas[_index] = newIdea;
	_index = (_index + 1) % 100;
	if (_size < 100)
		_size++;
}

std::string	Brain::operator[](size_t index) {
	if (index >= _size)
		return (_ideas[_size - 1]);
	return (_ideas[index]);
}

size_t	Brain::getSize(void) const {
	return (_size);
}
