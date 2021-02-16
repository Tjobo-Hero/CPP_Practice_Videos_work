/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 07:46:18 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/16 11:30:54 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>

class Parent				{public: virtual ~Parent(void) {} };
class Child1: public Parent	{};
class Child2: public Parent {};


int 		main(void)
{
	Child1	a;				// Reference value 
	Parent	*b 	=	&a;		// Implicit upcast	-> Ok

	// Implicit downcast		-> Suspens
	Child1	*c	=	dynamic_cast<Child1*>(b);
	if (c == NULL)
		std::cout << "Coversion is NOT OK" << std::endl;
	else
		std::cout << "Conversion is Ok" << std::endl;
	
	// Explicit downcast		-> Suspens
	try
	{
		Child2&		d	=	dynamic_cast<Child2&>(*b);
		std::cout << "Conversion is Ok" << std::endl;
	}
	catch(std::bad_cast &bc)
	{
		std::cout << "Conversion is NOT ok: " << bc.what() << std::endl;
		return (0);
	}
		
	return (0);
		
}	