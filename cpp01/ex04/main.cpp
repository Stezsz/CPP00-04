/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 15:01:19 by strodrig          #+#    #+#             */
/*   Updated: 2025/05/16 15:01:19 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Invalid number of arguments: Usage: './program'";
		std::cerr << " <filename> <firstString> <secondString>" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string firstString = av[2];
	std::string secondString = av[3];
	std::ifstream file(filename.c_str());
	if (firstString.empty())
	{
		std::cerr << "Error: First string (s1) cannot be empty." << std::endl;
		return (1);
	}
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return (1);
	}
	std::string filenameOut = filename + ".replace";
	std::ofstream newFile(filenameOut.c_str());
	if (!newFile.is_open())
	{
		std::cerr << "Error: Could not create file " << filenameOut << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(firstString, pos)) != std::string::npos)
		{
			line.erase(pos, firstString.length());
			line.insert(pos, secondString);
			pos += secondString.length();
		}
		newFile << line << std::endl;
	}
	file.close();
	newFile.close();
	return (0);
}
