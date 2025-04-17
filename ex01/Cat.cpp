/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:47:31 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 15:40:16 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"
#include <stdlib.h>

Cat::Cat( void ) {
	type = "Cat";

	brain = new (std::nothrow) Brain();
	if (brain == NULL) {
		std::cout << "Error allocating memory!" << std::endl;
		exit(1);
	}

	std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat( void ) {
	delete brain;

	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat( Cat const &cat ) : Animal(cat) {
	brain = new (std::nothrow) Brain();
	if (brain == NULL) {
		std::cout << "Error allocating memory!" << std::endl;
		return ;
	}

	type = cat.type;
	*brain = *cat.brain;

	std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator= ( Cat const &cat ) {
	Animal::operator= (cat);

	this->brain = new (std::nothrow) Brain();
	if (brain == NULL) {
		std::cout << "Error allocating memory!" << std::endl;
		return (*this);
	}

	this->type = cat.type;
	*(this->brain) = *cat.brain;

	std::cout << "Cat assignment operator" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Cat: *Miao* Miao* *Miao*" << std::endl;
}
