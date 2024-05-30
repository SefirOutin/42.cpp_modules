/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 16:27:48 by soutin            #+#    #+#             */
/*   Updated: 2024/05/23 16:10:21 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.class.hpp"
#include <iostream>

int	main()
{
	Data	data;
	data.value = 42;

	uintptr_t serializedPtr = Serializer::serialize(&data);
	Data *deserializedPtr = Serializer::deserialize(serializedPtr);

	if (deserializedPtr == &data)
		std::cout << "Ok, value: " << deserializedPtr->value << std::endl;
	else
		std::cerr << "Error" << std::endl;
	return (0);
}