/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stl1.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/25 15:17:09 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/25 16:28:11 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <list>

class IOperation;

int		main(void)
{
	std::list<int>						lst1;
	std::map<std::string, IOperation*>	map1;
	std::vector<int>					v1;
	std::vector<int>					v2(42, 100);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	// map1["opA"] = new OperationA;
	// map1["opB"] = new OperationB;

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = lst1.end();

	for(it = lst1.begin(); it != ite; it++)
	{
		std::cout << *it << std::endl;
	}
	
	
	return(0);
}
