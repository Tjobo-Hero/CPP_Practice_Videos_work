/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample1.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 10:05:26 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 10:10:01 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample1.class.hpp"

Sample1::Sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;
	std::cout << "this->a1: " << this->a1 << std::endl;
	
	this->a2 = p2;
	std::cout << "this->a2: " << this->a2 << std::endl;
	
	this->a3 = p3;
	std::cout << "this->a3: " << this->a3 << std::endl;
	
	return;
	
}

Sample1::~Sample1()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}