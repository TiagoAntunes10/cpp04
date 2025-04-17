/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:01:36 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:10:52 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

int main()
{
	int	size = 10;
	const AAnimal** meta = new const AAnimal*[size];

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

	return 0;
}
