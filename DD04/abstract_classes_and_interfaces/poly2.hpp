/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   poly2.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/25 13:21:03 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/25 13:37:59 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLY2_HPP
# define POLY2_HPP

#include <iostream>
#include <string>

class ACharacter
{
	private:

		std::string 	_name;
		
	public:
		
		virtual void	attack(std::string const &target) = 0;
		void			sayHello(std::string const &target);
		
};

class Warrior : public ACharacter
{
	public:

		virtual void	attack(std::string const &target);
};

// class ICoffeeMaker
// {
// 	public:

// 		virtual void			fillWaterTank(IWaterSource *src) = 0;
// 		virtual ICoffee*		makeCoffee(std::string const &type) = 0;
// };

#endif
