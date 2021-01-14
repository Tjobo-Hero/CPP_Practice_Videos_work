/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fstream1.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/14 10:25:14 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/01/14 10:37:49 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main(void)
{
	std::ifstream	ifs("numbers");
	unsigned int	dst;
	unsigned int	dst2;
	ifs >> dst >> dst2;

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.out");
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();

	return(0);
}