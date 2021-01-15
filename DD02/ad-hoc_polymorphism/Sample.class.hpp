/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Samle.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 10:16:44 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/15 10:23:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

#include <iostream>

class Sample
{
private:


public:
	Sample(void);
	~Sample(void);
	
	void	bar(char const c) const;
	void	bar(int const n) const;
	void	bar(float const z) const;
	void	bar (Sample const &i) const;
};
#endif
