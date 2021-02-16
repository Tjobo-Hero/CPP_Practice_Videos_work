/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 11:43:59 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/16 11:46:12 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int			main(void)
{
	int			a	=	42;						// Reference Value
	
	int const	*b  =	&a;						// Implicit promotion -> OK					
	int			*c	=	b;						// Implicit demotioin -> Hell no!
	int			*d	=	const_cast<int*>(b);	// Explicit demotion  -> Ok, I obey

	return (0);
}