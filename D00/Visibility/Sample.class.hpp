/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 10:54:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 11:16:43 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
public:

	int publicFoo;
	
	Sample();
	~Sample();

	void publicBar(void) const;

private:

	int		_privateFoo;

	void	_privateBar(void) const;

};

#endif