/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 21:07:19 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 21:07:28 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "./AAnimal.hpp"
# include "./Brain.hpp"

class Cat: public AAnimal {
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
