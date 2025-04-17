/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:51:19 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 15:51:23 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

Dog::Dog( void ) {
	type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::~Dog( void ) {
	std::cout << "Dog destructor" << std::endl;
}

Dog::Dog( Dog const &dog ) : Animal(dog) {
	type = dog.type;
	std::cout << "Dog copy constructor" << std::endl;
}

Dog &Dog::operator= ( Dog const &dog ) {
	Animal::operator= (dog);

	type = dog.type;
	std::cout << "Dog assignment operator" << std::endl;
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Dog: *Bark* *Bark* *Bark*" << std::endl;
}
