/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:12:27 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 11:12:27 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("noName") ,hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << GREEN_BACKGROUND << "ClapTrap" << GREEN_TEXT << " "
		<< name << " default constructor called" << std::endl << WHITE_TEXT;
}

ClapTrap::ClapTrap(const ClapTrap &clap): name(clap.name), hitPoints(clap.hitPoints),
	energyPoints(clap.energyPoints), attackDamage(clap.attackDamage) {
	std::cout << GREEN_BACKGROUND << "ClapTrap" << YELLOW_TEXT << " "
		<< name << " copy constructor called" << std::endl << WHITE_TEXT;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << GREEN_BACKGROUND << "ClapTrap" << BLUE_TEXT << " "
		<< name << " string constructor called" << std::endl << WHITE_TEXT;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &clap) {
	if (this != &clap) {
		name = clap.name;
		hitPoints = clap.hitPoints;
		energyPoints = clap.energyPoints;
		attackDamage = clap.attackDamage;
	}
	std::cout << GREEN_BACKGROUND << "ClapTrap" << MAGENTA_TEXT << " "
		<< name << " copy assignment called" << std::endl << WHITE_TEXT;
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << GREEN_BACKGROUND << "ClapTrap" << RED_TEXT << " "
		<< name << " destructor called" << std::endl << WHITE_TEXT;
}

void	ClapTrap::attack(const std::string &target) {
	if (energyPoints && hitPoints) {
		std::cout << GREEN_TEXT << "ClapTrap " << name << " attacks " << target << ", causing "
			<< attackDamage << " points of damage!" << std::endl << WHITE_TEXT;
		energyPoints--;
	}
	else if (!hitPoints)
		std::cout << RED_TEXT << "ClapTrap " << name << " is dead" << std::endl << WHITE_TEXT;
	else
		std::cout << YELLOW_TEXT << "ClapTrap " << name << " has no energy points to attack" << std::endl << WHITE_TEXT;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints) {
		if (hitPoints > amount)
			hitPoints -= amount;
		else {
			hitPoints = 0;
			energyPoints = 0;
		}
		std::cout << RED_TEXT << "ClapTrap " << name << " takes " << amount
			<< " points of damage, causing it's hit points to be " << hitPoints << std::endl << WHITE_TEXT;
	}
	else
		std::cout << YELLOW_TEXT << "ClapTrap " << name
			<< " can not take damge, since it's hit points are at " << hitPoints << std::endl << WHITE_TEXT;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints && hitPoints) {
		hitPoints += amount;
		energyPoints--;
		std::cout << GREEN_TEXT << "ClapTrap " << name << " gets repaired " << amount
			<< " hit points, causing it's hit points to be " << hitPoints
			<< " and it's energy points to be " << energyPoints << std::endl << WHITE_TEXT;
	}
	else if (!hitPoints)
		std::cout << RED_TEXT << "ClapTrap " << name << " is dead" << std::endl << WHITE_TEXT;
	else
		std::cout << YELLOW_TEXT << "ClapTrap " << name << " has no energy points to be repaired" << std::endl << WHITE_TEXT;
}

std::string	center(std::string input, int width = 120) {
    return std::string((width - input.length()) / 2, ' ') + input;
}
