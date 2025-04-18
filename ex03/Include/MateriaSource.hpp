/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:51:17 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 16:18:34 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "./AMateria.hpp"
# include "./IMateriaSource.hpp"

class MateriaSource
{
	private:
		AMateria	*_slot[4];
		int			_used_slots;

	public:
		MateriaSource( void );
		MateriaSource( MateriaSource const &ms );
		MateriaSource	&operator= ( MateriaSource const &ms );
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
