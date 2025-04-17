/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:51:17 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:52:14 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "./AMateria.hpp"

class MateriaSource
{
	public:
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const & type);
};

#endif
