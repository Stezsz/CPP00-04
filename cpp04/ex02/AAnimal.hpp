/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:46:24 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 13:46:24 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal &animal);
		AAnimal &operator=(const AAnimal &animal);
		virtual ~AAnimal(void);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
		virtual void setIdea(std::string newIdea);
		virtual void showIdeas(void);
	protected:
		std::string type;
};

#endif
