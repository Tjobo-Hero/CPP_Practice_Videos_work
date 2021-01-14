/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ref3.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:02:02 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 10:17:45 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REF3_HPP
# define REF3_HPP

#include <iostream>
#include <string>

class Student
{
private:
	
	std::string		_login;
	
public:
	
	Student(std::string const &login);
	~Student(void);
	std::string&		getLoginRef(void);
	std::string const&	getLoginRefConst(void) const;
	std::string*		getLoginPtr(void);
	std::string const*	getLoginPtrConst(void) const;

};

#endif