/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:31:38 by strodrig          #+#    #+#             */
/*   Updated: 2025/07/05 14:33:17 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: program usage -> ./Harl 'ARGS'" << std::endl;
		return (1);
	}
	Harl	harl;
	std::string	level(*(av + 1));

	harl.complain(level);
	return (1);
}
