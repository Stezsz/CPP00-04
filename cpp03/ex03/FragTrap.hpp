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

class	FragTrap: virtual public ClapTrap {
	protected:
		const static unsigned int hitPoints = 100;
		const static unsigned int attackDamage = 30;
	public:
		FragTrap(void);
		FragTrap(const FragTrap &frag);
		FragTrap(std::string &name);
		FragTrap	&operator=(const FragTrap &frag);
		~FragTrap(void);
		void	highFiveGuys(void);

};

#endif
