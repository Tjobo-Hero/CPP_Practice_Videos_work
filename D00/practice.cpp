/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   practice.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/11 15:50:01 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/11 15:52:52 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	char buff[567];

	std::cout << "Hello world" << std::endl;
	std::cout << "Input a word: ";
	std::cin >> buff;
	std::cout << "You entered: [" << buff << "]" << std::endl;
	
	return (0);
}