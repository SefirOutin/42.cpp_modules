/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:27 by soutin            #+#    #+#             */
/*   Updated: 2024/05/20 15:21:01 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.class.hpp"

int	main()
{
	Base*	obj = generate();

	std::cout << "identify(Base *): ";
	identify(obj);
	std::cout << "identify(Base &): ";
	identify(*obj);
	delete obj;
	return (0);
}