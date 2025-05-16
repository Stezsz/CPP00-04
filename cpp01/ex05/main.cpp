/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 16:31:38 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/16 16:31:38 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	harl;

	std::cout << "=========== First test -> should debug ===========" << std::endl;
	harl.complain("DEBUG");
	std::cout << "=========== First test -> should debug ===========" << std::endl;
	std::cout << std::endl;
	std::cout << "=========== Second test -> should info ===========" << std::endl;
	harl.complain("INFO");
	std::cout << "=========== Second test -> should info ===========" << std::endl;
	std::cout << std::endl;
	std::cout << "=========== Third test -> should warning ===========" << std::endl;
	harl.complain("WARNING");
	std::cout << "=========== Third test -> should warning ===========" << std::endl;
	std::cout << std::endl;
	std::cout << "=========== Fourth test -> should error ===========" << std::endl;
	harl.complain("ERROR");
	std::cout << "=========== Fourth test -> should error ===========" << std::endl;
	std::cout << std::endl;
	std::cout << "=========== Fifth test -> should error ===========" << std::endl;
	harl.complain("SOMETHING ELSE");
	std::cout << "=========== Fifth test -> should error ===========" << std::endl;
	std::cout << std::endl;
}
