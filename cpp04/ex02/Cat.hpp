/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:16:48 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:16:48 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		Cat(const Cat &cat);
		Cat		&operator=(const Cat &cat);
		~Cat(void);
		void	makeSound(void) const;
		void	setIdea(std::string newIdea);
		void	showIdeas(void);
	private:
		Brain *_b;
};

#endif
