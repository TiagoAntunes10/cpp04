/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:08:34 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:08:35 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "./AAnimal.hpp"
# include "./Brain.hpp"

class Dog: public AAnimal {
	public:
		Dog( void );
		~Dog( void );
		Dog( Dog const &dog );
		Dog &operator= ( Dog const &dog );
		void	makeSound( void ) const;

	private:
		Brain	*brain;
};

#endif
