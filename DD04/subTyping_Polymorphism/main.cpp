/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 12:08:20 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 13:09:50 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "poly1.hpp"

int main(void)
{
	//This is OK, obviously, Warrior IS a Warrior
	Warrior*	a = new Warrior();
	
	//This is also OK because Warrior IS a Character
	Character*	b = new Warrior();
	
	//This would NOT be ok because Character IS NOT a warrior
	//(Altough they ARE related, and W IS-A C, the reverse is untrue)
	//Warrior*	c = new Character();

	//This shoudl NOT be ok either because Cat is NOT a Character
	//(They are not even relate)
	//Character*	d = new Cat();

	a->sayHello("students");
	b->sayHello("students");
	return (0);
	
}