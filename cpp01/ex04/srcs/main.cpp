/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:29:27 by soutin            #+#    #+#             */
/*   Updated: 2024/04/18 16:09:31 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	file_manip(std::string find, std::string replace, std::string filepath)
{
	std::ifstream infile(filepath.c_str());
	std::string str;
	if (infile.bad() || infile.fail())
		return (1);
	std::ofstream outfile(filepath.append(".replace").c_str());
	while (!infile.eof())
	{
		getline(infile, str);
		for (int i = 0; i + find.length() <= str.length(); i++)
		{
			if (!str.substr(i, find.length()).compare(find) && find.length() != 0)
			{
				str.erase(i, find.length());
				str.insert(i, replace);
			}
		}
		outfile << str.append("\n");
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::string find;
	std::string replace;
	std::string filepath;
	if (ac == 4)
	{
		filepath = av[1];
		find = av[2];
		replace = av[3];
		if (file_manip(find, replace, filepath))
		{
			std::cout << "file problem" << std::endl;
			return (1);
		}
	}
	else
		std::cout << "Wrong nb of param" << std::endl;
	return (0);
}
