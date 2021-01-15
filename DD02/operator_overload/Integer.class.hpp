/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Integer.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:43:46 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 11:20:59 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

#include <iostream>

class Integer
{
private:
	
	int _n;

public:

	Integer(int const n);
	~Integer (void);
	
	int			getValue(void) const;
	Integer&	operator=(Integer const &rhs);
	Integer		operator+(Integer const &rhs) const;	
};

std::ostream&	operator<<(std::ostream &o, Integer const &rhs);

#endif
