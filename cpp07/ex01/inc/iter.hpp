/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 16:57:55 by soutin            #+#    #+#             */
/*   Updated: 2024/05/22 16:23:27 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>
#include <iostream>

template<typename T, typename F>
void	iter(T array[], size_t len, F func)
{
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void	displayElement(T element)
{
	std::cout << element << std::endl;
}

#endif