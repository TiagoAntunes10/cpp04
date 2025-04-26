/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:38:27 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/26 12:50:29 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "./AMateria.hpp"

class Cure : virtual public AMateria {
	public:
		Cure( void );
		~Cure( void );
		Cure( Cure const &cure );
		Cure	&operator= ( Cure const &cure );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
