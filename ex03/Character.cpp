/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:36:46 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/26 12:45:12 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

static void	clean_arr(AMateria **arr) {
	int	i;

	if (arr == NULL)
		return ;

	i = 0;
	while (arr[i] != NULL)
		delete arr[i++];

	delete[] arr;
}

Character::Character( void ) {
	_equiped_mat = 0;
	_floor_mat = 0;
	_drop_mat = NULL;
}

Character::Character( std::string name ) {
	_name = name;
	_equiped_mat = 0;
	_floor_mat = 0;
	_drop_mat = NULL;
}

Character::~Character() {
	for (int i = 0; i < _equiped_mat; i++) {
		delete _slot[i];
	}

	clean_arr(_drop_mat);
}

Character::Character( Character const &character ) {
	_name = character._name;
	_equiped_mat = character._equiped_mat;
	_floor_mat = 0;
	_drop_mat = NULL;

	for (int i = 0; i < character._equiped_mat; i++)
		_slot[i] = character._slot[i]->clone();
}

Character	&Character::operator= ( Character const &character ) {
	_name = character._name;
	_equiped_mat = character._equiped_mat;
	_floor_mat = 0;
	_drop_mat = NULL;

	for (int i = 0; i < character._equiped_mat; i++)
		_slot[i] = character._slot[i]->clone();

	return (*this);
}

std::string const &Character::getName() const {
	return (_name);
}

void Character::equip(AMateria* m) {
	if (_equiped_mat == 4)
		return ;

	_slot[_equiped_mat] = m;
	_equiped_mat++;
}

void Character::unequip(int idx) {
	if (idx >= _equiped_mat || idx < 0)
		return ;

	drop_materia(_slot[idx]);
	if (idx < _equiped_mat - 1) {
		for (int i = idx; i < _equiped_mat; i++)
			_slot[i] = _slot[i + 1];
	}

	_equiped_mat--;
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= _equiped_mat || idx < 0)
		return ;

	_slot[idx]->use(target);
}

void	Character::drop_materia(AMateria *m) {
	AMateria	**mat_arr = new AMateria*[_floor_mat + 2];
	
	for (int i = 0; i < _floor_mat; i++) {
		mat_arr[i] = _drop_mat[i];
	}
	mat_arr[_floor_mat] = m;
	mat_arr[_floor_mat + 1] = NULL;

	clean_arr(_drop_mat);

	_drop_mat = mat_arr;	

	_floor_mat++;
}
