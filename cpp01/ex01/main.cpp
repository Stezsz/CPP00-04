/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:42:04 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/16 11:42:29 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void) {
	int	zombiesNb = 5;
	Zombie	*zombies = zombieHorde(zombiesNb, "Stain");

	for (int i = 0; i < zombiesNb; i++) {
		zombies[i].announce();
	}

	delete [] zombies;
}
