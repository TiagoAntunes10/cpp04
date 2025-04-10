/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:52:45 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/10 22:23:09 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
	type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat( WrongCat const &wrong_cat ) : WrongAnimal(wrong_cat) {
	type = wrong_cat.type;
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat &WrongCat::operator= ( WrongCat const &wrong_cat ) {
	type = wrong_cat.type;
	std::cout << "WrongCat assignment operator" << std::endl;
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "WrongCat: *Bark* Bark* *Bark*" << std::endl;
}
