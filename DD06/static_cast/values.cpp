/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   values.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 15:18:49 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 15:21:22 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int			main(void)
{
	int		a	= 	42;						/* Reference value */
	
	double	b	=	a;						/* Implicit promotion	-> OK */
	int		c	=	b;						/* Implicit demotion	-> Hell no! */
	int		d	=	static_cast<int>(b);	/* Explicit demotion	-> Ok, I obey */

	return (0);
}