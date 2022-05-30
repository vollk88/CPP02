/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:03:10 by hloki             #+#    #+#             */
/*   Updated: 2022/05/31 00:53:10 by hloki            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0)
{
	cout << GREEN "Default constructor called" END << endl;
}

Fixed::Fixed(const Fixed &object)
{
	cout << YELLOW "Copy constructor called" END << endl;
	*this = object;
}

Fixed::Fixed(const int value)
{
	cout << BLUE "Int constructor called" END << endl;
	this->_fixedPoint = (value << this->_bits);
}

Fixed::Fixed(const float value)
{
	cout << BLUE "Float constructor called" END << endl;
	this->_fixedPoint = roundf(value * (1 << _bits));
}

Fixed::~Fixed()
{
	cout << RED "Destructor called" END << endl;
}

int	Fixed::getRawBits() const
{
	return(this->_fixedPoint);
}

void	Fixed::setRawBits(const int raw)
{
	this->_fixedPoint = raw;
}

Fixed	&Fixed::operator=(const Fixed &object)
{
	cout << BLUE "Copy assignment operator called" END << endl;
	this->setRawBits(object.getRawBits());
	return (*this);
}

float	Fixed::toFloat(void) const
{
	return ((float)(getRawBits() / (float)(1 << _bits)));
}

int		Fixed::toInt(void) const
{
	return ((int)(getRawBits() / (1 << _bits)));
}

std::ostream	&operator<<(std::ostream &outs, Fixed const &anotherFixed)
{
	outs << anotherFixed.toFloat();
	return (outs);
}