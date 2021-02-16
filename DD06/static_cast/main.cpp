/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 15:23:51 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 15:28:13 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent					{};
class Child1 : public Parent	{};
class Child2 : public Parent	{};

class Unrelated					{};



int		main(void)
{
	Child1		a;										// Reference value
	
	Parent		*b	=	&a;								// Implicit upcast		-> OK
	Child1		*c	=	b;								// Implicit	downcast	-> Hell no!
	Child2		*d	=	static_cast<Child2*>(b);		// Explicit downcast	-> Ok, I obey
	
	Unrelated	*e	=	static_cast<Unrelated*>(&a);	// Explicit conversion	-> NO!
	
	return (0);
}