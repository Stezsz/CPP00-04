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

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void test_animals() {
	std::cout << "[TEST] Creating and deleting animals" << std::endl;
	AAnimal* d = new Dog();
	AAnimal* c = new Cat();
	d->makeSound();
	c->makeSound();
	delete d;
	delete c;
}

void test_deep_copy() {
	std::cout << "\n[TEST] Deep copy for Dog and Cat" << std::endl;
	Dog d1;
	d1.setIdea("Chase tail");
	d1.setIdea("Eat food");
	Dog d2 = d1;
	d2.setIdea("Sleep");
	std::cout << "Dog1 ideas:" << std::endl; d1.showIdeas();
	std::cout << "Dog2 ideas:" << std::endl; d2.showIdeas();

	Cat c1;
	c1.setIdea("Sleep on keyboard");
	c1.setIdea("Knock over glass");
	Cat c2;
	c2 = c1;
	c2.setIdea("Eat fish");
	std::cout << "Cat1 ideas:" << std::endl; c1.showIdeas();
	std::cout << "Cat2 ideas:" << std::endl; c2.showIdeas();
}

void test_array() {
	std::cout << "\n[TEST] Array of AAnimals (polymorphism)" << std::endl;
	const int size = 4;
	AAnimal* animals[size];
	for (int i = 0; i < size / 2; ++i) animals[i] = new Dog();
	for (int i = size / 2; i < size; ++i) animals[i] = new Cat();
	for (int i = 0; i < size; ++i) animals[i]->makeSound();
	for (int i = 0; i < size; ++i) delete animals[i];
}

int main() {
	test_animals();
	test_deep_copy();
	test_array();
	return 0;
}
