/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:42:11 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/10 17:14:46 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

Animal::Animal( void ) {
	std::cout << "Animal constructor" << std::endl;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal( Animal const &animal ) {
	(void) animal;
	std::cout << "Animal copy constructor" << std::endl;
}

Animal &Animal::operator= ( Animal const &animal ) {
	(void) animal;
	std::cout << "Animal assignment operator" << std::endl;
	return (*this);
}

// void	Animal::makeSound( void ) const {
// 	return ;
// }

std::string	Animal::getType( void ) const {
	return (type);
}
