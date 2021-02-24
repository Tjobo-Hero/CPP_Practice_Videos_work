/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 12:18:47 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/23 12:20:44 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Vertex.class.tpp"

int			main(void)
{
	Vertex< int >		v1(12, 23, 34);
	Vertex<>			v2(12, 23, 34);

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return (0);
}