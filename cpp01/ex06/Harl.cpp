/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:34:04 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/16 16:34:04 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {

}

Harl::~Harl(void) {

}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	switch (i)
	{
	case 0:
		Harl::debug();
		std::cout << std::endl; // fall through
	case 1:
		Harl::info();
		std::cout << std::endl; // fall through
	case 2:
		Harl::warning();
		std::cout << std::endl; // fall through
	case 3:
		Harl::error();
		std::cout << std::endl;
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break ;
	}
}
