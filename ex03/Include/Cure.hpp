/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:38:27 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:39:00 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "./AMateria.hpp"

class Cure : virtual AMateria {
	protected:

	public:
		Cure( void );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
