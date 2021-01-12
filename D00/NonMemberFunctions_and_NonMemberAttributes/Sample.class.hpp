/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 12:50:32 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 12:53:33 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
public:

	Sample(void);
	~Sample(void);
	
	static	int	getNbInst (void);
	
private:

	static	int _nbInst;
};
#endif