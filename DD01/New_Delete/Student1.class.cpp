/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Student1.class.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 15:06:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 15:10:23 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Student1.class.hpp"

Student1::Student1(void) : _login("ldefault")
{
	std::cout << "Student " << this->_login << " is born." << std::endl;
	return;
}

Student1::~Student1(void)
{
	std::cout << "Student " << this->_login << " died." << std::endl;
	return;
}

int main(void)
{
	Student1*	students = new Student1[42];

	delete [] students;
	
	return (0);	
}