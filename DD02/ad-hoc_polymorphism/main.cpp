/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:26:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 12:33:40 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int		main(void)
{
	Sample			tim;
	char const		test1 = 'c';
	int const		test2 = 20;
	float const		test3 = 1.4;
	Sample&			timref = tim;

	tim.bar(test1);
	tim.bar(test2);
	tim.bar(test3);
	tim.bar(timref);

	return(0);
}