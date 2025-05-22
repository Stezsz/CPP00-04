/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:40:12 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 12:40:12 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap() {
	std::cout << YELLOW_BACKGROUND << "ScavTrap" << GREEN_TEXT
		<< " " << ClapTrap::name  << " default constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = 100;
	ClapTrap::energyPoints = 50;
	ClapTrap::attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scav) : ClapTrap(scav) {
	std::cout << YELLOW_BACKGROUND << "ScavTrap" << YELLOW_TEXT
		<< " " << ClapTrap::name << " copy constructor called" << std::endl << WHITE_TEXT;
	this->operator=(scav);
}

ScavTrap::ScavTrap(std::string &name): ClapTrap(name) {
	std::cout << YELLOW_BACKGROUND <<  "ScavTrap" << BLUE_TEXT
		<< " " << ClapTrap::name  << " string constructor called" << std::endl << WHITE_TEXT;
	ClapTrap::hitPoints = 100;
	ClapTrap::energyPoints = 50;
	ClapTrap::attackDamage = 20;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scav) {
	if (this != &scav)
		ClapTrap::operator=(scav);
	std::cout << YELLOW_BACKGROUND << "ScavTrap" << MAGENTA_TEXT
		<< " " << ClapTrap::name << " copy assignment called" << std::endl << WHITE_TEXT;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << YELLOW_BACKGROUND << "ScavTrap" << RED_TEXT
		<< " " << ClapTrap::name << " destructor called" << std::endl << WHITE_TEXT;
}

void	ScavTrap::attack(const std::string &target) {
	if (ClapTrap::hitPoints && ClapTrap::energyPoints) {
		ClapTrap::energyPoints--;
		std::cout << GREEN_TEXT <<  "ScavTrap " << ClapTrap::name <<  " attacks "
			<< target << ", causing " << ClapTrap::attackDamage
			<< " points of damage!" << std::endl << WHITE_TEXT;
	}
	else if (!ClapTrap::hitPoints)
		std::cout << RED_TEXT << "ScavTrap " << ClapTrap::name << " is dead" << std::endl << WHITE_TEXT;
	else {
		std::cout << YELLOW_TEXT << "ScavTrap " << ClapTrap::name
			<< " has no energy points to attack" << std::endl << WHITE_TEXT;
	}
}

void	ScavTrap::guardGate(void) {
	if (ClapTrap::hitPoints && ClapTrap::energyPoints) {
		std::cout << BLUE_TEXT << "ScavTrap " << ClapTrap::name
			<< " is now in Gate keeper mode" << std::endl << WHITE_TEXT;
	}
	else if (!ClapTrap::hitPoints)
		std::cout << RED_TEXT << "ScavTrap " << ClapTrap::name << " is dead" << std::endl << WHITE_TEXT;
	else
		std::cout << RED_TEXT << "ScavTrap " << ClapTrap::name << " has no energy points" << std::endl << WHITE_TEXT;
}
