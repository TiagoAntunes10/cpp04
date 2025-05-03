/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:46:51 by tialbert          #+#    #+#             */
/*   Updated: 2025/05/03 12:40:12 by tialbert         ###   ########.fr       */
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

	std::cout << std::endl << std::endl;

	Character	test_copy("copies");

	tmp = src->createMateria("ice");
	test_copy.equip(tmp);

	tmp = src->createMateria("cure");
	test_copy.equip(tmp);

	Character	copy_2(test_copy);
	Character	copy_3 = test_copy;

	std::cout << "original: " << &test_copy << std::endl;
	std::cout << "copy constructor copy: " << &copy_2 << std::endl;
	std::cout << "copy assignment copy: " << &copy_3 << std::endl;

	std::cout << std::endl;

	test_copy.use(0, *bob);
	copy_2.use(0, *bob);
	copy_3.use(0, *bob);

	std::cout << std::endl;

	test_copy.use(1, *bob);
	copy_2.use(1, *bob);
	copy_3.use(1, *bob);

	test_copy.use(2, *bob);
	copy_2.use(2, *bob);
	copy_3.use(2, *bob);

	delete bob;
	delete src;

	return 0;
}
