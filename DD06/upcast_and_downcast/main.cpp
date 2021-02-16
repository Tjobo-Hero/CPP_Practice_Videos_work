/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 13:40:45 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 15:12:10 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Parent					{};
class Child1 : public Parent	{};
class Child2 : public Parent	{};

int		main(void)
{
	
	Child1 		a;							/* Reference value */
						
	Parent		*b	=	&a;					/* Implicit 'reinterpretation' cast */
	Parent		*c	= 	(Parent*)	&a;		/* Explicit 'reinterpretation' cast */
	
	Parent 		*d	=	&a;					/* Implicit upcast 		-> OK */
	Child1		*e	=	d;					/* Implicit downcast	-> Hell no! */
	Child2		*f	= 	(Child2*)	d;		/* Explicit downcast	-> Ok, but not really? */

	return(0);
}
