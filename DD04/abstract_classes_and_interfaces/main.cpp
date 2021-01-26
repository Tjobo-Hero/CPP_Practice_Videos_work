/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 13:20:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 13:31:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "poly2.hpp"

int		main(void)
{
	ACharacter* 	a = new Warrior();

	//This would NOT be ok because ACharacter is abstract
	//ACharacter*		b = new ACharacter();

	a->sayHello("students");
	a->attack("Roger");
	return (0);
}