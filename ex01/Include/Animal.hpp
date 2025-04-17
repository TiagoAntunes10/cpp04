/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:17:47 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 14:42:47 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	public:
		Animal( void );
		virtual ~Animal( void );
		Animal( Animal const &animal );
		Animal &operator= ( Animal const &animal );
		virtual void	makeSound( void ) const {} ;
		std::string		getType( void ) const;

	protected:
		std::string	type;
};

#endif
