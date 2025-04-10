/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:19:38 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/10 22:21:52 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "./Animal.hpp"

class Dog: public Animal {
	public:
		Dog( void );
		~Dog( void );
		Dog( Dog const &dog );
		Dog &operator= ( Dog const &dog );
		void	makeSound( void ) const;
};

#endif
