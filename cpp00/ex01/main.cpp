/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:10:23 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/14 16:10:23 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

/// @brief This functions displays a header for the Contacts table,
/// with index, firstName, lastName and nickName.
/// @param
static void	displayPhoneBookHeader(void) {
	std::cout << std::right << std::setw(10) << "index" << "|";
	std::cout << std::right << std::setw(10) << "firstName" << "|";
	std::cout << std::right << std::setw(10) << "lastName" << "|";
	std::cout << std::right << std::setw(10) << "nickName" << "|" <<  std::endl;
}

/// @brief This function replaces whites spaces for space and
/// trims the string.
/// @param temp
/// @return
static std::string	str_trim(std::string temp) {
	for (size_t i = 0; i < temp.length(); i++) {
		if (std::isspace(temp[i]))
			temp[i] = ' ';
	}
	size_t begin = temp.find_first_not_of(" \t\v\r\n\f");
	size_t end = temp.find_last_not_of(" \t\v\r\n\f");
	return (temp.substr(begin, end - begin + 1));
}

/// @brief This function displays an summarized info-table of a given contact.
/// @param contact
/// @param index
static void	showSummarizedInfos(Contact contact, size_t index) {
	std::cout << std::right << std::setw(10) << index << "|";
	for (size_t i = 0; i < 3; i++) {
		std::string temp = contact.getContactInfo(i);
		if (temp.length() > 10)
			std::cout << std::right << std::setw(9) << str_trim(temp).substr(0, 9) << "." <<  "|";
		else
			std::cout << std::right << std::setw(10) << str_trim(temp) << "|";
	}
	std::cout << std::endl;
}

/// @brief This function displays all informations about a given contact
/// @param contact
/// @param index
static void	showFullInfos(Contact contact, size_t index) {
	std::string columns[5] = {"firstName", "lastName",
		"nickName", "phoneNumber", "darkestSecret"};
	std::cout << "index" << ": " << index << std::endl;
	for (size_t i = 0; i < 5; i++) {
		std::string temp = contact.getContactInfo(i);
		std::cout << columns[i] <<  ": " << temp << std::endl;
	}
}

/// @brief This function displays all available contacts in the PhoneBook.
/// @param phonebook
static void	displayContacts(PhoneBook phonebook) {
	displayPhoneBookHeader();
	for (size_t i = 0; i < phonebook.getCapacity(); i++) {
		Contact contact = phonebook.getContact(i);
		if (!contact.getContactInfo(0).length()) {
			return ;
		}
		showSummarizedInfos(contact, i);
	}
}

/// @brief This function calls the displaysContacts and then
/// asks for a valid index of the PhoneBook, displays all
/// informations of the given Contact. If the index is out
/// of range it displays a customized message about it, else
/// if the given index is in the range, however there's no
/// Contact set in this index it displays a customized error
/// message 'Invalid index!'.
/// @param phonebook
static void	searchContact(PhoneBook phonebook) {
	Contact		contact;
	std::string	str;
	size_t		index;

	displayContacts(phonebook);
	std::cout << "Type the index of the wanted contact:" << std::endl;
	std::getline(std::cin, str);
	if (str.length() != 1 || str.at(0) < '0' || str.at(0) > '7') {
		std::cerr << "Invalid input: range (0-7)" << std::endl;
		return ;
	}
	index = str.at(0) - 48;
	if (index < phonebook.getCapacity()) {
		contact = phonebook.getContact(index);
		if (!contact.getContactInfo(0).length()) {
			std::cerr << "Invalid index!" << std::endl;
			return ;
		}
		else
			showFullInfos(contact, index);
	}
}

/// @brief This function calls the setContact member functions from both
/// PhoneBook and Contact classes, and adds the new given Contact.
/// @param phonebook
static bool	addContact(PhoneBook *phonebook) {
	Contact &cont = phonebook->setContact();
	std::string	info;

	return (cont.setContact());
}

int	main(void) {
	std::string reader;
	PhoneBook	phonebook;

	std::cout << "Welcome to the PHONEBOOK!" << std::endl;

	while (true) {
		std::cout << "Available commands: ADD | SEARCH | EXIT" << std::endl;
		std::cout << "> ";
		if (!std::getline(std::cin, reader)) {
			std::cout << "\nInput closed. Exiting program!" << std::endl;
			break;
		}
		if (reader == "ADD") {
			if (!addContact(&phonebook))
				std::cerr << "Failed to add contact. Please try again." << std::endl;
		}
		else if (reader == "SEARCH") {
			searchContact(phonebook);
		}
		else if (reader == "EXIT") {
			std::cout << "Exiting program!" << std::endl;
			break;
		}
		else if (!reader.empty()) {
			std::cout << "Invalid command. Use: ADD | SEARCH | EXIT" << std::endl;
		}
	}
	return 0;
}
