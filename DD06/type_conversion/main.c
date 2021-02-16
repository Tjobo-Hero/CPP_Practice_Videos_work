/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 11:30:34 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 13:15:53 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dump_32bits_integer( int const n)
{
	if(n)
		write(0, "HIasdf", 6);
	return;
}
void	dump_64bits_double( double const z)
{
	if(z)
		write(0, "HIasdf", 6);
	return;
}


int	main(void)
{
	int a = 42;					/* Reference value */

	double 	b 	= a;			/* Implicit conversion cast */
	double 	c 	= (double) a;	/* Explicit conversion cast */

	double 	d 	= a;			/* Implicit promotion 	-> OK */
	int 	e 	= d;			/* Implicit conversion	-> Hazardous!! */
	int		f	= (int) d;		/* Explicit demotion 	-> OK, you're in charge*/
	
	dump_32bits_integer(a);
	
	dump_64bits_double(b);
	dump_64bits_double(c);

	dump_64bits_double(d);
	dump_32bits_integer(e);
	dump_32bits_integer(f);

	return (0);	
}