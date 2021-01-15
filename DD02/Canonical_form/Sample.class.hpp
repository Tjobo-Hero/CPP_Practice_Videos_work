/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 12:08:25 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 12:12:00 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
private:

	int		_foo;

public:

	Sample(void);
	Sample(int const n);
	Sample(Sample const &src);
	~Sample(void);

	Sample&		operator=(Sample const &rhs);

	int			getFoo(void) const;
};

std::ostream&		operator<<(std::ostream &o, Sample const &i);
#endif
