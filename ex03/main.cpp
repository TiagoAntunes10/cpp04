/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:46:51 by tialbert          #+#    #+#             */
/*   Updated: 2025/05/03 22:02:50 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Include/include.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(4, *bob);

	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);

	me->unequip(1);
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	me->unequip(3);
	me->unequip(4);
	me->unequip(2);
	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	delete me;

	Character	test_copy("copies");

	tmp = src->createMateria("ice");
	test_copy.equip(tmp);

	tmp = src->createMateria("cure");
	test_copy.equip(tmp);

	{
		Character	copy_2(test_copy);
		Character	copy_3 = test_copy;
	}

	delete bob;
	delete src;

	return 0;
}
