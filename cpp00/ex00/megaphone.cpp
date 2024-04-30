/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:19:41 by soutin            #+#    #+#             */
/*   Updated: 2024/04/10 14:15:12 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int	i = 0;
	int	j = 1;

    if (ac == 1)
    {
	    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;    
		return 0;
	}
	while (av[j])
	{
		i = 0;
		while (av[j][i])
			std::cout << (char)toupper(av[j][i++]);
		std::cout << " ";
		j++;	
	}
	std::cout << std::endl;
    return 0;
}
