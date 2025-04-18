/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:38:27 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 15:16:37 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "./AMateria.hpp"

class Cure : virtual AMateria {
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const &cure );
		Cure	&operator= ( Cure const &cure );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
