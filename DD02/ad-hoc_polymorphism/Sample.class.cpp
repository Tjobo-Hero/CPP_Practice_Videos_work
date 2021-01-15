/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:19:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 12:33:36 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample(void)
{
	std::cout << "Constructer called" << std::endl;
	return;
}

Sample::~Sample(void)
{
	std::cout << "Destructer called" << std::endl;
	return;
}

void	Sample::bar(char const c) const
{
	std::cout << "Member fucntion bar called with [char] overload: " << c << std::endl;
	return;
}

void	Sample::bar(int const n) const
{
	std::cout << "Member fucntion bar called with [int] overload: " << n << std::endl;
	return;
}

void	Sample::bar(float const z) const
{
	std::cout << "Member fucntion bar called with [float] overload: " << z << std::endl;
	return;
}

void	Sample::bar (Sample const &i) const
{
	(void) i;
	std::cout << "Member fucntion bar called with [Sample reference] overload." << std::endl;
	return;
}