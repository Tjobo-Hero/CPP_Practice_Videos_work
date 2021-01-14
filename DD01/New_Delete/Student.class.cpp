/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Student.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 14:29:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:37:22 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Student.class.hpp"

Student::Student(std::string login) : _login(login)
{
	std::cout << "Student " << this->_login << " is born." << std::endl;
	return;
}

Student::~Student(void)
{
	std::cout << "Student " << this->_login << " died." << std::endl;
	return;
}

int main(void)
{
	Student		bob = Student("bfubar");
	Student*	jim = new Student("jfubar");

	delete jim;
	
	return (0);	
}