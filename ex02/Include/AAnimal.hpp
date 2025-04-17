/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:17:47 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:05:14 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal {
	public:
		AAnimal( void );
		virtual ~AAnimal( void );
		AAnimal( AAnimal const &animal );
		AAnimal &operator= ( AAnimal const &animal );
		virtual void	makeSound( void ) const = 0;
		std::string		getType( void ) const;

	protected:
		std::string	type;
};

#endif
