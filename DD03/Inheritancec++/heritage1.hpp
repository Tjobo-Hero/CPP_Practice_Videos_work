/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   heritage1.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 10:09:58 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 10:22:02 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERITAGE1_HPP
# define HERITAGE1_HPP

#include <iostream>
#include <string>

class Cat
{
private:

	int		_numberOfLegs;

public:

	Cat(void);
	Cat(Cat const &other);
	Cat& operator=(Cat const &other);
	~Cat(void);
	
	void	run(int distance);
	void	scornSomeone(std::string const &target);
	
};

class Pony
{
private:
	
	int		_numberOfLegs;

public:

	Pony(void);
	Pony(Pony const &other);
	Pony& operator=(Pony const &rhs);
	~Pony(void);

	void	run(int distance);
	void	doMagic(std::string const &target);
};

#endif
