/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Integer.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 11:06:19 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 11:50:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

Integer::Integer(int const n) : _n(n)
{
	std::cout << "Constructer called with value: " << n << std::endl;
	return;
}

Integer::~Integer(void)
{
	std::cout << "Destructor called with value: " << _n << std::endl;
	return;
}

int		Integer::getValue(void) const
{
	return this->_n;
}

Integer&	Integer::operator=(Integer const &rhs)
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	
	this->_n = rhs.getValue();
	
	return *this;
}

Integer		Integer::operator+(Integer const &rhs) const
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	
	return Integer(this->_n + rhs.getValue());
}

std::ostream&	operator<<(std::ostream &o, Integer const &rhs)
{
	o << rhs.getValue();
	return o;
}

