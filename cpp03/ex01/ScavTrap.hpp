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

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string &name);
		~ScavTrap(void);

		ScavTrap &operator=(const ScavTrap &scav);

		void attack(const std::string &target);
		void guardGate(void);
};

#endif
