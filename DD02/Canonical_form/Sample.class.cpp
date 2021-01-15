/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 12:16:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 12:40:36 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) : _foo(0)
{
	std::cout << "Default Constructor called." << std::endl;
	return;
}

Sample::Sample(int const n) : _foo(n)
{
	std::cout << "Parametric Constructor called" << std::endl;
	return;
}

Sample::Sample(Sample const &src)
{
	std::cout << "Copy construcor called." << std::endl;
	*this = src;

	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructor called." << std::endl;
	return;
}

int		Sample::getFoo(void) const
{
	return this->_foo;
}

Sample&		Sample::operator=(Sample const &rhs)
{
	std::cout << "Assignment operator called" << std::endl;
	
	if(this != &rhs)
		this->_foo = rhs.getFoo();
	
	return *this;
}

std::ostream&		operator<<(std::ostream &o, Sample const &i)
{
	o << "The value of _foo is : " << i.getFoo();

	return o;
}