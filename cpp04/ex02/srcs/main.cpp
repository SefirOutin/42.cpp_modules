/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:20:53 by soutin            #+#    #+#             */
/*   Updated: 2024/04/30 16:23:07 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"

int main()
{
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	std::cout << "-------------------------------------" << std::endl;
	
	AAnimal	*animals[10];
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
		static_cast<Dog*>(animals[0])->getBrain()->setIdea(i, "something");
	std::cout << "1st Dog after filling" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << (static_cast<Dog*>(animals[0])->getBrain()->getIdeas(i)) << " ";
	std::cout << std::endl;
	*static_cast<Dog*>(animals[1]) = *static_cast<Dog*>(animals[0]);
	std::cout << "2nd Dog after copy" << std::endl << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << (static_cast<Dog*>(animals[1])->getBrain()->getIdeas(i)) << " ";
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return 0;
}