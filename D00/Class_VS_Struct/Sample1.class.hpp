/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample1.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:28:14 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 11:30:01 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE1_CLASS_HPP
# define SAMPLE1_CLASS_HPP

struct Sample1
{
	int		foo;

	Sample1();
	~Sample1();

	void	bar(void) const;
};

#endif