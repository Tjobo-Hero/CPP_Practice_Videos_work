/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   poly1.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 12:00:16 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 13:13:04 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY1_HPP
# define POLY1_HPP

#include <iostream>
#include <string>

class Character
{
	public:

		virtual void	sayHello(std::string const &target);
		
};

class Warrior : public Character
{
	public:

		virtual void	sayHello(std::string const &target);
};

class Cat
{
	//[...]	
};

#endif
