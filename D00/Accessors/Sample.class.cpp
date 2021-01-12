/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:45:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 11:53:04 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo: " << this->getFoo() << std::endl;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called: " << std::endl;
	return;
}

int		Sample::getFoo(void) const
{
	return this->_foo;
}

void	Sample::setFoo(int v)
{
	if (v >= 0)
		this->_foo = v;
	else
		std::cout << "Please enter 'postive' vibes" << std::endl;
	
	return;
}