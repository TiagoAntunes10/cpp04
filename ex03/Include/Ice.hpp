/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:35:52 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:37:54 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "./AMateria.hpp"

class Ice : virtual AMateria {
	protected:

	public:
		Ice( void );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
