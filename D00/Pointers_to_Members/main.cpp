/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 13:53:31 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:09:47 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int		main(void)
{
	Sample		instance;
	Sample		*instancep = &instance;

	int			Sample::*p = NULL;
	void		(Sample::*f)(void) const;
	
	p = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42;
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	
	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();

	return (0);
}