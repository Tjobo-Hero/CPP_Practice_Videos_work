/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/16 11:36:20 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/16 11:38:43 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	float 		a	=	420.042f;					// Reference Value

	void		*b 	=	&a;							// Implicit promotion	-> Ok		
	int			*c	= 	reinterpret_cast<int*>(b);	// Explicit demotion	-> Ok, I obey
	int&		d	=	reinterpret_cast<int&>(b);  // Explicit demotion	-> Ok, I obey

	return (0); 
}