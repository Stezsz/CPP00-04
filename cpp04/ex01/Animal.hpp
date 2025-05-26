/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:11:45 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:11:45 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal(void);
		virtual void makeSound(void) const;
		std::string getType(void) const;
		virtual void setIdea(std::string newIdea);
		virtual void showIdeas(void);
	protected:
		std::string type;
};

#endif
