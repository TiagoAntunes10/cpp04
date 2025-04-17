/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:37:58 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 15:21:37 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Include/includes.hpp"

Brain::Brain( void ) {
	std::cout << "Brain constructor" << std::endl;
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor" << std::endl;
}

Brain::Brain( Brain const &brain ) {
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];

	std::cout << "Brain copy constructor" << std::endl;
}

Brain &Brain::operator= ( Brain const &brain ) {
	for (int i = 0; i < 100; i++)
		ideas[i] = brain.ideas[i];

	std::cout << "Brain assignment operator" << std::endl;
	return (*this);
}
