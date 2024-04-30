/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:34:19 by soutin            #+#    #+#             */
/*   Updated: 2024/04/23 18:13:31 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << "5.05 / 2: " << Fixed( 5.05f ) / Fixed( 2 ) << std::endl;
	std::cout << "5.05 * 2: " << Fixed( 5.05f ) * Fixed( 2 ) << std::endl;
	std::cout << "5.05 + 2: " << Fixed( 5.05f ) + Fixed( 2 ) << std::endl;
	std::cout << "5.05 - 2: " << Fixed( 5.05f ) - Fixed( 2 ) << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " <<  ++a << std::endl;
	std::cout << "a: " <<  a << std::endl;
	std::cout << "a++: " <<  a++ << std::endl;
	std::cout << "a: " <<  a << std::endl;
	std::cout << "b: " <<  b << std::endl;
	std::cout << "max: " <<  Fixed::max( a, b ) << std::endl;
	std::cout << "min: " <<  Fixed::min( a, b ) << std::endl;
	return 0;
}