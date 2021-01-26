/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   poly1.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 12:04:40 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 12:07:51 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "poly1.hpp"

void	Character::sayHello(std::string const &target)
{
	std::cout << "Hello " << target << " !" << std::endl;
	return;
}

void	Warrior::sayHello(std::string const &target)
{
	std::cout << "F*** off " << target << ", I don't like you !" << std::endl;
	return;
}


