/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hloki <hloki@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:03:10 by hloki             #+#    #+#             */
/*   Updated: 2022/05/31 00:11:49 by hloki            ###   ########.fr       */
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
	this->setRawBits(object.getRawBits());
}

Fixed::~Fixed()
{
	cout << RED "Destructor called" END << endl;
}

int	Fixed::getRawBits() const
{
	cout << PINK "getRawBits member function called" END << endl;
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