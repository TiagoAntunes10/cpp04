/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:24:16 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 15:45:15 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"
#include "Include/AMateria.hpp"

Cure::Cure( void ) : AMateria("cure") {
}

Cure::~Cure( void ) {
}

Cure::Cure( Cure const &cure ) : AMateria(cure._type) {
}

Cure	&Cure::operator= ( Cure const &cure ) {
	this->_type = cure._type;
	
	return (*this);
}

AMateria *Cure::clone() const {
	AMateria	*copy = new Cure();

	return (copy);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals "
		<< target.getName()
		<< "'s wounds *"
		<< std::endl;

}
