/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:40:09 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 12:40:09 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap: virtual public ClapTrap {
	protected:
		const static unsigned int	energyPoints = 50;
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string &name);
		ScavTrap	&operator=(const ScavTrap &scav);
		~ScavTrap(void);
		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif
