/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 11:55:11 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 13:18:18 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			main(void)
{
	float	a		= 420.042f;			/* Reference value */
	
	void	*b		= &a;				/* Implicit reinterpretation canst */
	void	*c		= (void*) &a;		/* Explicit reinterpretation canst */
	
	void	*d		= &a;				/* Implicit reinterpretation promotion 	-> OK */			
	int		*e		= d;				/* Implicit reinterpretation demotion 	-> Hazardous!! */
	int		*f		= (int*) d;			/* Explicit reinterpretation demotion	-> Ok, I obey */

	printf("%p, %f\n", &a, a);
	
	printf("%p\n", b);
	printf("%p\n", c);
	
	printf("%p\n", d);
	printf("%p, %d\n", e, *e);
	printf("%p, %d\n", f, *f);

	return (0);
}