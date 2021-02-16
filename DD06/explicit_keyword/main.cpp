/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 11:53:04 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/16 11:59:15 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class A	{};
class B	{};

class C	
{
	public:

					C(A const &a) {return;}
		explicit	C(B const &b) {return;}
};

void		f(C const &c)
{
	return;
}

int			main(void)
{
	f(A());		// Implicit conversion Ok
	f(B());		// Implicit conversion NOT OK, constructor is explicit

	return (0);
}