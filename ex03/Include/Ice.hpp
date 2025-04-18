/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:35:52 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 15:16:34 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "./AMateria.hpp"

class Ice : virtual AMateria {
	public:
		Ice( void );
		~Ice( void );
		Ice( Ice const &ice );
		Ice	&operator= ( Ice const &ice );
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif
