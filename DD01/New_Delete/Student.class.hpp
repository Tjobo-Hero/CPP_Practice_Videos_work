/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Student.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 14:31:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 14:33:24 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
# define STUDENT_CLASS_HPP

#include <iostream>
#include <string>

class Student
{
private:
	std::string		_login;

public:
	Student(std::string login);
	~Student(void);
};

#endif