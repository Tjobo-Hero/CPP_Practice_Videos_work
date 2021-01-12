/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 09:42:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 09:43:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sample.class.hpp"

int main(void)
{
	Sample instance;
	
	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	
	instance.bar();

	return (0);
}