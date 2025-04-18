/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:24:30 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 15:45:59 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

Ice::Ice( void ) : AMateria("ice") {
}

Ice::~Ice( void ) {
}

Ice::Ice( Ice const &ice ) : AMateria(ice._type) {
}

Ice	&Ice::operator= ( Ice const &ice ) {
	this->_type = ice._type;
	
	return (*this);
}

AMateria *Ice::clone() const {
	AMateria	*copy = new Ice();

	return (copy);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at "
		<< target.getName()
		<< " *"
		<< std::endl;

}
