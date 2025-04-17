/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:19:16 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 14:42:37 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "./Animal.hpp"
# include "./Brain.hpp"

class Cat: public Animal {
	public:
		Cat( void );
		~Cat( void );
		Cat( Cat const &cat );
		Cat &operator= ( Cat const &cat );
		void	makeSound( void ) const;

	private:
		Brain	*brain;
};

#endif
