/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:13:31 by soutin            #+#    #+#             */
/*   Updated: 2024/05/21 16:54:11 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main()
{
	std::vector<int> numbers;
	numbers.push_back(0);
	numbers.push_back(12);
	numbers.push_back(9);
	numbers.push_back(5);
	numbers.push_back(3);

	try {
		std::vector<int>::iterator result = easyfind(numbers, 3);
		std::cout << "Value found at position: " << std::distance(numbers.begin(), result) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator result = easyfind(numbers, 6);
		std::cout << "Value found at position: " << std::distance(numbers.begin(), result) << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return (0);
}