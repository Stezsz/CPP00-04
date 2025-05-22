/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:55:50 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 12:55:50 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap {
	private:
		std::string		_name;
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &diamond);
		DiamondTrap(std::string &name);
		DiamondTrap	&operator=(const DiamondTrap &diamond);
		~DiamondTrap(void);
		void	attack(std::string &target);
		void	whoAmI(void);
};

#endif
