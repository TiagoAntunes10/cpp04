/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:56:55 by tialbert          #+#    #+#             */
/*   Updated: 2025/05/02 14:52:04 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

WrongAnimal::WrongAnimal( void ) {
	std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &wrong_animal ) {
	(void) wrong_animal;
	std::cout << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator= ( WrongAnimal const &wrong_animal ) {
	(void) wrong_animal;
	std::cout << "WrongAnimal assignment operator" << std::endl;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const {
	return (type);
}
