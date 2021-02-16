/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/15 13:25:00 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/15 13:31:18 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
	int			a	= 	42;					/* Reference value */
	
	int const 	*b	=	&a;					/* Implicit type qualifier cast */
	int const	*c	= 	(int const *) &a;	/* Explicit type qualifier cast */
	
	int const	*d	= 	&a;					/* Implicit promotion 	-> OK */
	int			*e	=	d;					/* Implicit demotion 	-> HELL NO! */
	int			*f 	=	(int*)d;			/* Implicit demotion 	-> Ok, I obey */

	return (0);	
}