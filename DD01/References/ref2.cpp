/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ref2.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 09:21:46 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 09:50:31 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void		byPtr(std::string *str)
{
	*str += " and ponies";
	return;
}

void		byConstPtr(std::string const *str)
{
	std::cout << *str << std::endl;
	return;
}

void		byRef(std::string &str)
{
	str += " and ponies";
}

void		byConstRef(std::string const &str)
{
	std::cout << str << std::endl;
}

int			main(void)
{
	std::string str = "i like butterflies";
	
	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);
	
	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
	return(0);
}