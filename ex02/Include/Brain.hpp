/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tialbert <tialbert@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 12:30:27 by tialbert          #+#    #+#             */
/*   Updated: 2025/04/17 15:40:56 by tialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	public:
		Brain( void );
		~Brain( void );
		Brain( Brain const &cat );
		Brain &operator= ( Brain const &cat );

	private:
		std::string	ideas[100];
};

#endif
