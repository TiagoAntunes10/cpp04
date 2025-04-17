/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:05:47 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:06:31 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

AAnimal::AAnimal( void ) {
	std::cout << "AAnimal constructor" << std::endl;
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal::AAnimal( AAnimal const &animal ) {
	(void) animal;
	std::cout << "AAnimal copy constructor" << std::endl;
}

AAnimal &AAnimal::operator= ( AAnimal const &animal ) {
	(void) animal;
	std::cout << "AAnimal assignment operator" << std::endl;
	return (*this);
}

std::string	AAnimal::getType( void ) const {
	return (type);
}
