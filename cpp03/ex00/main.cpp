/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 11:12:29 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/22 11:12:29 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::string	fighter("Player 1");
	std::string	enemy("Player 2");
	std::string	reader("answer");

	{
		std::cout << RED_TEXT << "=================================TEST 1===============================" << std::endl;
		std::cout << center("TESTING CLAPTRAP DEAFULT CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a;
			(void)a;
		}
		std::cout << RED_TEXT << "=================================TEST 1================================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << GREEN_TEXT << "=================================TEST 2===============================" << std::endl;
		std::cout << center("TESTING CLAPTRAP COPY CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a;
			ClapTrap	b(a);
			(void)a;
			(void)b;
		}
		std::cout << GREEN_TEXT << "=================================TEST 2===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << YELLOW_TEXT << "=================================TEST 3===============================" << std::endl;
		std::cout << center("TESTING CLAPTRAP STRING CONSTRUCTOR", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a(fighter);
			(void)a;
		}
		std::cout << YELLOW_TEXT << "=================================TEST 3===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}

	reader = "answer";
	while (!std::cin.eof() && !reader.empty()) {
		std::cout << "Press Enter to continue ..." << std::endl;
		std::getline(std::cin, reader);
	}

	{
		std::cout << BLUE_TEXT << "=================================TEST 4===============================" << std::endl;
		std::cout << center("TESTING CLAPTRAP COPY ASSGINMENT", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a(fighter);
			ClapTrap	b;
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
		std::cout << center("TESTING CLAPTRAP MEMBER FUNCTIONS 0", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a(fighter);

			a.attack(enemy);
			a.takeDamage(3);
			a.beRepaired(15);
			a.takeDamage(45);
			a.attack(enemy);
			a.beRepaired(5);
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
		std::cout << center("TESTING CLAPTRAP MEMBER FUNCTIONS 1", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a(fighter);

			a.attack(enemy);
			a.takeDamage(5);
			a.beRepaired(5);
			a.takeDamage(5);
			a.attack(enemy);
			a.beRepaired(5);
			for (int i = 0; i < 8; i++) {
				a.attack(enemy);
			}
			a.beRepaired(5);
			a.attack(enemy);
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
		std::cout << center("TESTING CLAPTRAP MEMBER FUNCTIONS 2", 70) << std::endl << WHITE_TEXT;
		{
			ClapTrap	a(fighter);

			for (int i = 0; i < 10; i++) {
				a.beRepaired(10);
			}
			a.attack(enemy);
		}
		std::cout << GREEN_TEXT << "=================================TEST 7===============================" << std::endl;
		std::cout << std::endl << WHITE_TEXT;
	}
	return (0);
}
