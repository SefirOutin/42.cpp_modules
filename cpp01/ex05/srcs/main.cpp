/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 18:17:54 by soutin            #+#    #+#             */
/*   Updated: 2024/04/22 17:36:31 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;
	
	harl.complain("DEBUG");
	harl.complain("INFO");
  	harl.complain("WARNING");
  	harl.complain("ERROR");
}