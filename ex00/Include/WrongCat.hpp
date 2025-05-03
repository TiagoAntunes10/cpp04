/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:47:49 by tialbert          #+#    #+#             */
/*   Updated: 2025/05/03 11:57:46 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "./WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat( void );
		~WrongCat( void );
		WrongCat( WrongCat const &wrong_cat );
		WrongCat &operator= ( WrongCat const &wrong_cat );
		void	makeSound( void ) const;
};

#endif
