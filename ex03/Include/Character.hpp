/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:42:55 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/18 15:16:31 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "./AMateria.hpp"

class Character : virtual ICharacter {
	private:
		AMateria	*_slot[4];
		int			_equiped_mat;
		std::string	_name;
		AMateria	**_drop_mat;
		int			_floor_mat;

	public:
		Character( void );
		Character( std::string name );
		Character( Character const &character );
		Character	&operator= ( Character const &character );
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		void	drop_materia(AMateria *m);
};

#endif
