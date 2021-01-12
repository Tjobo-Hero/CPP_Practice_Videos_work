/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 13:50:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 13:53:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void) : foo(0)
{
	std::cout << "Constructor called" << std::endl;
	return;
}
Sample::~Sample(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return;
}
