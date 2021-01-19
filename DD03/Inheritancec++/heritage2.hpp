/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   heritage2.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/19 10:22:14 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/19 11:27:45 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HERITAGE2_HPP
# define HERITAGE2_HPP

#include <iostream>
#include <string>

class Animal
{
private:
	
	int		_numberOfLegs;

public:

	Animal(void);
	Animal(Animal const &other);
	Animal& operator=(Animal const &rhs);
	
	void		run(int distance);	
	void		call(void);
	void		eat(std::string const &what);
	void		walk(int distance);
};

class Cat : public Animal
{
public:

	Cat(void);
	Cat(Cat const &other);
	Cat& operator=(Cat const &rhs);
	~Cat(void);
	
	void		scornSomeone(std::string const &target);
};

class Pony : public Animal
{

public:
	
	Pony(void);
	Pony(Pony const &other);
	Pony& operator=(Pony const &rhs);
	~Pony(void);

	void	doMagic(std::string const &target);
};

#endif