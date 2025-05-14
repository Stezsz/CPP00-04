/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:11:58 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/14 15:11:58 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : index(0), capacity(8) {

}

PhoneBook::~PhoneBook(void) {

}

size_t PhoneBook::getCapacity(void) {
	return (this->capacity);
}

Contact &PhoneBook::setContact(void) {
	size_t index = this->index;
	this->index = (this->index + 1) % this->capacity;
	return (this->contacts[index]);
}

Contact PhoneBook::getContact(size_t index) {
	return (this->contacts[index]);
}
