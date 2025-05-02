/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:13:41 by tialbert          #+#    #+#             */
/*   Updated: 2025/05/02 15:26:59 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl;

	int	size = 10;
	const Animal** meta = new const Animal*[size];

	std::cout << std::endl;

	if (size % 2 == 0 && size >= 4) {
		for (int i = 0; i < size / 2; i++) {
			meta[i] = new Cat();
			meta[i + size / 2] = new Dog();
		}

		for (int i = 0; i < size; i++) {
			std::cout << meta[i]->getType() << ": " << &meta[i] << std::endl;
			meta[i]->makeSound();
		}

		for (int i = 0; i < size; i++)
			delete meta[i];
	}

	delete[] meta;

	std::cout << std::endl << std::endl;

	Cat	cat1;
	Cat	cat2(cat1);
	Cat cat3 = cat2;
	Dog	dog1;
	Dog	dog2(dog1);
	Dog dog3 = dog2;

	std::cout << std::endl;

	std::cout << cat1.getType() << ": " << &cat1 << std::endl;
	std::cout << cat2.getType() << ": " << &cat2 << std::endl;
	std::cout << cat3.getType() << ": " << &cat3 << std::endl;

	std::cout << dog1.getType() << ": " << &dog1 << std::endl;
	std::cout << dog2.getType() << ": " << &dog2 << std::endl;
	std::cout << dog3.getType() << ": " << &dog3 << std::endl;

	std::cout << std::endl;

	return 0;
}
