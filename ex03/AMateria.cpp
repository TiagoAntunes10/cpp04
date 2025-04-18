/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:18:34 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 11:23:52 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

AMateria::AMateria(std::string const & type) {
	_type = type;	
}

std::string const &AMateria::getType() const {
	return (_type);
}

void AMateria::use(ICharacter& target) {
	(void) target;

	return ;
}
