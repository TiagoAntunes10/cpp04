/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:46:31 by tialbert          #+#    #+#             */
/*   Updated: 2025/05/03 22:06:28 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	public:
		WrongAnimal( void );
		virtual ~WrongAnimal( void );
		WrongAnimal( WrongAnimal const &wrong_animal );
		WrongAnimal &operator= ( WrongAnimal const &wrong_animal );
		void	makeSound( void ) const;
		std::string		getType( void ) const;

	protected:
		std::string	type;
};

#endif
