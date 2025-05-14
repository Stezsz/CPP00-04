/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:55:47 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/12 17:55:47 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

std::string &Contact::setContactInfo(size_t type) {
	switch (type) {
		case 0:
			std::cout << "First name: " << std::endl;
			return (this->first_name);
		case 1:
			std::cout << "Last name: " << std::endl;
			return (this->last_name);
		case 2:
			std::cout << "Nickname: " << std::endl;
			return (this->nickname);
		case 3:
			std::cout << "Phone number: " << std::endl;
			return (this->phone_number);
		case 4:
			std::cout << "Darkest secret: " << std::endl;
			return (this->darkest_secret);
		default:
			std::cout << "First name: " << std::endl;
			return (this->first_name);
	}
}

std::string Contact::getContactInfo(size_t type) {
	switch (type) {
		case 0:
			return (this->first_name);
		case 1:
			return (this->last_name);
		case 2:
			return (this->nickname);
		case 3:
			return (this->phone_number);
		case 4:
			return (this->darkest_secret);
		default:
			return (this->first_name);
	}
}

bool	Contact::setContact(void) {
	std::string info;

	for (size_t i = 0; i < 5; i++) {
		std::string &field = this->setContactInfo(i);
		std::getline(std::cin, info);
		while ((i == 3 && !onlyDigits(info)) || (onlyWhiteSpace(info))) {
			if (std::cin.eof())
				return (false);
			std::cerr << "Invalid input!" << std::endl;
			setContactInfo(i);
			std::getline(std::cin, info);
		}
		field = info;
	}
	return (true);
}


/// @brief Check if a string contains only digits
/// @param str
/// @return
bool onlyDigits(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (str.at(i) < '0' || str.at(i) > '9') {
			return (false);
		}
	}
	return (true);
}

/// @brief Check if a string contains only whitespace characters
/// @param str
/// @return
bool onlyWhiteSpace(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isspace(str.at(i))) {
			return (false);
		}
	}
	return (true);
}
