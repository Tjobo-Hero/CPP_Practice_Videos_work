/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ref3.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 09:58:07 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:38 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ref3.hpp"


Student::Student(std::string const &login) : _login(login)
{
	std::cout << "Constructor Called" << std::endl;
	return;
}

Student::~Student(void)
{
	std::cout << "Destructor Called" << std::endl;
}

std::string&		Student::getLoginRef(void)
{
	return this->_login;
}

std::string const&	Student::getLoginRefConst(void) const
{
	return this->_login;
}

std::string*		Student::getLoginPtr(void)
{
	return &(this->_login);
}

std::string const*	Student::getLoginPtrConst(void) const
{
	return &(this->_login);
}