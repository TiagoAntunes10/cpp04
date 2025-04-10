/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:47:31 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/10 22:22:04 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

Cat::Cat( void ) : Animal() {
	type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::~Cat( void ) {
	std::cout << "Cat destructor" << std::endl;
}

Cat::Cat( Cat const &cat ) : Animal(cat) {
	type = cat.type;
	std::cout << "Cat copy constructor" << std::endl;
}

Cat &Cat::operator= ( Cat const &cat ) {
	type = cat.type;
	std::cout << "Cat assignment operator" << std::endl;
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Cat: *Miao* Miao* *Miao*" << std::endl;
}
