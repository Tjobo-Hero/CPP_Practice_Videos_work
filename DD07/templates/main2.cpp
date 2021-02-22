/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main2.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/22 16:52:30 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/22 17:00:57 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
class	List
{
	private:

		T			*_content;
		List<T>		*_next;
		
	public:

		List<T>(T const &content)
		{
			//Etc..
		}
		List<T> (List<T> const &list)
		{
			//Etc..
		}
		~List<T>(void)
		{
			// Etc..
		}
	
};


int		main(void)
{
	List<int>		a(42);
	List<float>		b(3.14f);
	List<List<int> > c(a);

	// Etc..
	return (0);
}