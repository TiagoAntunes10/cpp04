/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:51:19 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 15:35:09 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"
#include <stdlib.h>

Dog::Dog( void ) {
	type = "Dog";

	brain = new (std::nothrow) Brain();
	if (brain == NULL) {
		std::cout << "Error allocating memory!" << std::endl;
		exit(1);
	}

	std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog( void ) {
	delete brain;

	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog( Dog const &dog ) : Animal(dog) {
	brain = new (std::nothrow) Brain();
	if (brain == NULL) {
		std::cout << "Error allocating memory!" << std::endl;
		return ;
	}

	type = dog.type;
	*brain = *dog.brain;

	std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator= ( Dog const &dog ) {
	Animal::operator= (dog);

	this->brain = new (std::nothrow) Brain();
	if (brain == NULL) {
		std::cout << "Error allocating memory!" << std::endl;
		return (*this);
	}

	this->type = dog.type;
	*(this->brain) = *dog.brain;

	std::cout << "Dog assignment operator" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Dog: *Bark* *Bark* *Bark*" << std::endl;
}
