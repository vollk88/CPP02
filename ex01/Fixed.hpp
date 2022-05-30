/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:03:07 by hloki             #+#    #+#             */
/*   Updated: 2022/05/31 00:45:21 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# define RED "\033[38;05;203m"
# define PINK "\033[38;05;176m"
# define GREEN "\033[38;05;108m"
# define END "\033[0m"
# define CYAN "\033[38;05;158m"
# define BLUE "\033[38;05;81m"
# define YELLOW "\033[38;05;186m"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class	Fixed
{
	public:
		Fixed();
		Fixed(Fixed const &object);
		Fixed(const int value);
		Fixed(const float value);
		virtual ~Fixed();
		Fixed	&operator=(const Fixed &object);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fixedPoint;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &anotherFixed);

#endif
