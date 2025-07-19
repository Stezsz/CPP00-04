/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:12:29 by strodrig          #+#    #+#             */
/*   Updated: 2025/07/19 14:27:33 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::string	fighter("Player 1");
	std::string	enemy("Player 2");
	std::string	reader("answer");

	{
		std::cout << BLUE_TEXT << "=================================TEST 1===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP DEAFULT CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a;
			(void)a;
		}
		std::cout << BLUE_TEXT << "=================================TEST 1===============================" << std::endl << WHITE_TEXT;
	}

	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}
	{
		std::cout << RED_TEXT << "=================================TEST 2===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP COPY CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a;
			DiamondTrap	b(a);
			(void)a;
			(void)b;
		}
		std::cout << RED_TEXT << "=================================TEST 2===============================" << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << YELLOW_TEXT << "=================================TEST 3===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP STRING CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a(fighter);
			(void)a;
		}
		std::cout << YELLOW_TEXT << "=================================TEST 3===============================" << std::endl;
		std::cout << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << BLUE_TEXT << "=================================TEST 4===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP COPY ASSIGNMENT", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a(fighter);
			DiamondTrap	b;
			(void)a;

			b = a;
			(void)b;
		}
		std::cout << BLUE_TEXT << "=================================TEST 4===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << MAGENTA_TEXT << "=================================TEST 5===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP MEMBER FUNCTIONS 0", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a(fighter);

			a.attack(enemy);
			a.takeDamage(3);
			a.beRepaired(15);
			a.takeDamage(45);
			a.attack(enemy);
			a.beRepaired(5);
			a.guardGate();
			a.highFiveGuys();
			a.whoAmI();
		}
		std::cout << MAGENTA_TEXT << "=================================TEST 5===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << RED_TEXT << "=================================TEST 6===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP MEMBER FUNCTIONS 1", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a(fighter);

			a.attack(enemy);
			a.takeDamage(5);
			a.beRepaired(5);
			a.takeDamage(5);
			a.attack(enemy);
			a.beRepaired(5);
			for (int i = 0; i < 50; i++) {
				a.attack(enemy);
			}
			a.beRepaired(5);
			a.attack(enemy);
			a.guardGate();
			a.highFiveGuys();
			a.whoAmI();
		}
		std::cout << RED_TEXT << "=================================TEST 6===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << GREEN_TEXT << "=================================TEST 7===============================" << std::endl;
		std::cout << center("TESTING DIAMONDTRAP MEMBER FUNCTIONS 2", 70) << std::endl << WHITE_TEXT;
		{
			DiamondTrap	a(fighter);

			for (int i = 0; i < 50; i++) {
				a.beRepaired(10);
			}
			a.attack(enemy);
			a.guardGate();
			a.highFiveGuys();
			a.whoAmI();
		}
		std::cout << GREEN_TEXT << "=================================TEST 7===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}
	return (0);
}
