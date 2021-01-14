/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Student1.class.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 15:06:05 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 15:08:34 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef STUDENT_CLASS_HPP
# define STUDENT_CLASS_HPP

#include <iostream>
#include <string>

class Student1
{
private:
	std::string		_login;

public:
	Student1(void);
	~Student1(void);
};

#endif