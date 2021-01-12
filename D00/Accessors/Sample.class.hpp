/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:39:42 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 11:41:04 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
public:

	Sample();
	~Sample();

	int		getFoo(void) const;
	void	setFoo(int v);

private:

	int _foo;
};

#endif