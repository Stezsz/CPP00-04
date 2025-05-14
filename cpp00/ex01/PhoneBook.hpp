/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 15:11:56 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/14 15:11:56 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <Contact.hpp>

class PhoneBook {
	private:
		Contact	contacts[8];
		size_t		index;
		size_t		capacity;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		Contact		&setContact(void);
		Contact		getContact(size_t index);
		size_t	getCapacity(void);
};

#endif
