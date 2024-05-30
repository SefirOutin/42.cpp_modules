/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:11:39 by soutin            #+#    #+#             */
/*   Updated: 2024/05/22 16:39:19 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	squareElement(int &n)
{
	n *= n;
}

int	main()
{
	int	intArray[] = {1, 2, 3, 4, 5};
	double	doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};

	std::cout << "Displaying intArray:" << std::endl;
	iter(intArray, 5, displayElement<int>);
	std::cout << std::endl;

	std::cout << "Displaying doubleArray:" << std::endl;
	iter(doubleArray, 5, displayElement<double>);
	std::cout << std::endl;

	std::cout << "Squaring elements of intArray:" << std::endl;
	iter(intArray, 5, squareElement);
	iter(intArray, 5, displayElement<int>);
	std::cout << std::endl;

	return (0);
}