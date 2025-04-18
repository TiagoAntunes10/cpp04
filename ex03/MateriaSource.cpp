/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:47:24 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 16:15:38 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

MateriaSource::MateriaSource( void ) {
	_used_slots = 0;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _used_slots; i++)
		delete _slot[i];
}

MateriaSource::MateriaSource( MateriaSource const &ms ) {
	*this = ms;
}

MateriaSource	&MateriaSource::operator= ( MateriaSource const &ms ) {
	_used_slots = ms._used_slots;

	for (int i = 0; i < ms._used_slots; i++)
		_slot[i] = ms._slot[i]->clone();
}

void MateriaSource::learnMateria(AMateria *m) {
	if (_used_slots == 4)
		return ;

	_slot[_used_slots] = m;

	_used_slots++;
}

AMateria *MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < _used_slots; i++) {
		if (_slot[i]->getType().compare(type) == 0)
			return (_slot[i]->clone());
	}

	return (0);
}
