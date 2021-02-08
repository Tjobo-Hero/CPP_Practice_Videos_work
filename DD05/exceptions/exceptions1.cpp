/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   exceptions1.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/05 10:06:47 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/08 11:34:28 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>

void	test1(void)
{

	try
	{
		//Do some stuff here
		if(/* there's an error */)
		{
			throw std::exception();
		}
		else
		{
			//Do some more stuff
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}
void	test2(void)
{
	//Do some stuff here
	if(/* there's an error */)
	{
		throw std::exception();
	}
	else
	{
		//Do some more stuff
	}
}

void	test3(void)
{
	try
	{
		test2();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

void	test4(void)
{
	class PEBKACException : public std::exception
	{
		public:

			virtual const char*	what() const throw()
			{
				return("Problem excists between keyboard and chair");
			}
	};
	
	try
	{
		test3();
	}
	catch(PEBKACException& e)
	{
		//Handle the fact that the user is an idiot
	}
	catch(std::exception& e)
	{
		//Handle other exceptions that are like std::exception
	}
	
}