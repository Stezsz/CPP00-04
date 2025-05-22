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

ClapTrap::ClapTrap(void) : _name("noName") ,_hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN_BACKGROUND << "ClapTrap" << WHITE_TEXT <<  " " << _name << " default constructor called" << std::endl << WHITE_TEXT;
}

ClapTrap::ClapTrap(const ClapTrap &clap): _name(clap._name), _hitPoints(clap._hitPoints), _energyPoints(clap._energyPoints), _attackDamage(clap._attackDamage)
{
	std::cout << GREEN_BACKGROUND << "ClapTrap" << WHITE_TEXT <<  " " << _name << " copy constructor called" << std::endl << WHITE_TEXT;
}

ClapTrap::ClapTrap(std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << GREEN_BACKGROUND << "ClapTrap" << BLUE_TEXT <<  " " << _name << " constructor called" << std::endl << WHITE_TEXT;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << GREEN_BACKGROUND << "ClapTrap" << RED_TEXT <<  " " << _name << " destructor called" << std::endl << WHITE_TEXT;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	if (this != &clap)
	{
		_name = clap._name;
		_hitPoints = clap._hitPoints;
		_energyPoints = clap._energyPoints;
		_attackDamage = clap._attackDamage;
	}
	std::cout << GREEN_BACKGROUND << "ClapTrap" << MAGENTA_TEXT <<  " " << _name << " copy assignment called" << std::endl << WHITE_TEXT;
	return *this;
}

void	ClapTrap::attack(const std::string &target) {
	if (_energyPoints && _hitPoints) {
		std::cout << GREEN_TEXT << "ClapTrap " << _name << " attacks " << target << ", causing "
			<< _attackDamage << " points of damage!" << std::endl << WHITE_TEXT;
		_energyPoints--;
	}
	else if (!_hitPoints)
		std::cout << RED_TEXT << "ClapTrap " << _name << " is dead" << std::endl << WHITE_TEXT;
	else
		std::cout << YELLOW_TEXT << "ClapTrap " << _name << " has no energy points to be repaired" << std::endl << WHITE_TEXT;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints) {
		if (_hitPoints > amount)
			_hitPoints -= amount;
		else {
			_hitPoints = 0;
			_energyPoints = 0;
		}
		std::cout << RED_TEXT << "ClapTrap " << _name << " takes " << amount
			<< " points of damage, causing it's hit points to be " << _hitPoints << std::endl << WHITE_TEXT;
	}
	else
		std::cout << YELLOW_TEXT << "ClapTrap " << _name
			<< " can not take damge, since it's hit points are at " << _hitPoints << std::endl << WHITE_TEXT;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints && _hitPoints) {
		_hitPoints += amount;
		_energyPoints--;
		std::cout << GREEN_TEXT << "ClapTrap " << _name << " gets repaired " << amount
			<< " hit points, causing it's hit points to be " << _hitPoints
			<< " and it's energy points to be " << _energyPoints << std::endl << WHITE_TEXT;
	}
	else if (!_hitPoints)
		std::cout << RED_TEXT << "ClapTrap " << _name << " is dead" << std::endl << WHITE_TEXT;
	else
		std::cout << YELLOW_TEXT << "ClapTrap " << _name << " has no energy points to attack" << std::endl << WHITE_TEXT;
}

std::string	center(std::string input, int width = 120) {
	return std::string((width - input.length()) / 2, ' ') + input;
}
