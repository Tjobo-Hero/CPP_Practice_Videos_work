/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/12 13:00:23 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/12 13:03:28 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

void	f0(void)
{
	Sample	instance;
	
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return;

}

void	f1(void)
{
	Sample instance;
	
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();

	return ;
}

int main(void)
{
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	return (0);
}