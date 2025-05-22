/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:45:17 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 12:45:17 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const FragTrap &frag);
		FragTrap(std::string &name);
		~FragTrap(void);

		FragTrap &operator=(const FragTrap &frag);

		void highFivesGuys(void);
};

#endif
