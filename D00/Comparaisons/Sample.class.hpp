/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sample.class.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 11:59:41 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 12:39:19 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

class Sample
{

public:
	Sample(int v);
	~Sample(void);

	int		getFoo(void) const;
	int		compare(Sample *other) const;

private:
	int		_foo;
};
#endif