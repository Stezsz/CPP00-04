/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:41:35 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 12:41:35 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
	public:
		Brain(void);
		Brain(const Brain &brain);
		Brain &operator=(const Brain &brain);
		~Brain(void);
		void	setIdea(std::string newIdea);
		size_t	getSize(void) const;
		std::string	operator[](size_t index);
	private:
		std::string	_ideas[100];
		size_t		_size;
		size_t		_index;
};

#endif
