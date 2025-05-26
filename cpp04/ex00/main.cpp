/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:46:33 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/26 11:46:33 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "=== Proper polymorphism ===" << std::endl;

	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "dog: " << dog->getType() << std::endl;
	std::cout << "cat: " << cat->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << "\n=== Wrong polymorphism ===" << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "wrongCat: " << wrongCat->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
