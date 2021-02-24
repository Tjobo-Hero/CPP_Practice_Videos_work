/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 13:02:15 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/23 13:05:17 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pair.class.tpp"


int			main(void)
{
	Pair< int, int >			p1(4, 2);
	Pair< std::string, float >	p2(std::string("Pi"), 3.14f);
	Pair< float, bool >			p3(4.2f, true);
	Pair< bool, bool >			p4(true, false);

	std::cout << p1 << std::endl;
	std::cout << p2 << std::endl;
	std::cout << p3 << std::endl;
	std::cout << p4 << std::endl;

	return (0);
}