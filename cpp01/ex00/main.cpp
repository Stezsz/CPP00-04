/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:54:17 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/16 11:54:17 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	Zombie	*zombie = newZombie("Foo");
	Zombie	*zombie2 = newZombie("Bar");
	Zombie	zombie3 = Zombie("Heliot");

	if (!zombie || !zombie2) {
		std::cout << "Memory allocation failed" << std::endl;
		delete zombie;
		delete zombie2;
		return (1);
	}
	zombie->announce();
	randomChump("Kakarot");
	zombie2->announce();
	zombie3.announce();
	delete zombie;
	delete zombie2;
	return (0);
}
