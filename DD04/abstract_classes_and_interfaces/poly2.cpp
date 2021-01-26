/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   poly2.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 13:21:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 13:38:21 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "poly2.hpp"

void		ACharacter::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << "!" << std::endl;
	return;
}

void		Warrior::attack(std::string const &target)
{
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
	return; 
}

