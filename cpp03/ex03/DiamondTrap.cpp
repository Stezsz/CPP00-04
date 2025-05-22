/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:55:48 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 12:55:48 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("noName_clap_name") ,ScavTrap(), FragTrap(), _name("noName") {
	std::cout << MAGENTA_BACKGROUND << "DiamondTrap" << GREEN_TEXT << " "
		<< _name << " default constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = FragTrap::hitPoints;
	ClapTrap::energyPoints = ScavTrap::energyPoints;
	ClapTrap::attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamond)
	: ClapTrap(diamond._name + "_clap_name"), ScavTrap(diamond), FragTrap(diamond), _name(diamond._name) {
	std::cout << MAGENTA_BACKGROUND << "DiamondTrap" << YELLOW_TEXT << " "
		<< _name << " copy constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = diamond.hitPoints;
	ClapTrap::energyPoints = diamond.energyPoints;
	ClapTrap::attackDamage = diamond.attackDamage;
}

DiamondTrap::DiamondTrap(std::string &name): ClapTrap(name + "_clap_name") {
	_name = name;
	std::cout << MAGENTA_BACKGROUND << "DiamondTrap" << BLUE_TEXT << " "
		<< _name << " string constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = FragTrap::hitPoints;
	ClapTrap::energyPoints = ScavTrap::energyPoints;
	ClapTrap::attackDamage = FragTrap::attackDamage;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &diamond) {
	if (this != &diamond) {
		ScavTrap::operator=(diamond);
		FragTrap::operator=(diamond);
		_name = diamond._name;
		ClapTrap::hitPoints = diamond.hitPoints;
		ClapTrap::energyPoints = diamond.energyPoints;
		ClapTrap::attackDamage = diamond.attackDamage;
	}
	std::cout << MAGENTA_BACKGROUND << "DiamondTrap" << MAGENTA_TEXT << " "
		<< _name << " copy assignment operator called" << std::endl << WHITE_TEXT;
	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << MAGENTA_BACKGROUND << "DiamondTrap" << RED_TEXT
		<< " " << _name << " destructor called" << std::endl << WHITE_TEXT;
}

void	DiamondTrap::attack(std::string &target) {
	if (ClapTrap::hitPoints && ClapTrap::energyPoints) {
		std::cout << GREEN_TEXT << "DiamondTrap " << _name << " attacks "
			<< target << " causing, " << ClapTrap::attackDamage << " points of damage!" << std::endl << WHITE_TEXT;
	}
	else if (!ClapTrap::hitPoints)
		std::cout << RED_TEXT << "DiamondTrap " << _name << " is dead" << std::endl << WHITE_TEXT;
	else
		std::cout << YELLOW_TEXT << "DiamondTrap " << _name << " has no energy points" << std::endl << WHITE_TEXT;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << MAGENTA_TEXT << "DiamondTrap name " << _name
		<< " ClapTrap name " << ClapTrap::name << std::endl << WHITE_TEXT;
}
