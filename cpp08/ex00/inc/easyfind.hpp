/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:14:03 by soutin            #+#    #+#             */
/*   Updated: 2024/05/21 16:57:22 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
typename T::iterator easyfind(T &container, int val)
{
	typename T::iterator it = std::find(container.begin(), container.end(), val);
	if (it != container.end())
		return (it);
	else
		throw std::out_of_range("NoOccurenceFound");
}

#endif