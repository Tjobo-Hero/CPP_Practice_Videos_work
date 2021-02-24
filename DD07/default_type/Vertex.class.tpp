/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Vertex.class.tpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: timvancitters <timvancitters@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/23 12:11:50 by timvancitte   #+#    #+#                 */
/*   Updated: 2021/02/23 12:20:27 by timvancitte   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

template< typename T = float >
class Vertex
{
	private:

		T const	_x;
		T const	_y;
		T const _z;
		
		Vertex(void);
	
	public:

		Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z){}
		~Vertex(void){}

		T const &		getX(void) const { return this->_x; }
		T const &		getY(void) const { return this->_y; }
		T const &		getZ(void) const { return this->_z; }

		// Etc..
};

template< typename T >
std::ostream&	operator<<(std::ostream &o, Vertex< T > const &v)
{
	std::cout.precision(1);
	o << std::setiosflags(std::ios::fixed);
	o << "Vertex( ";
	o << v.getX() << " , ";
	o << v.getY() << " , ";
	o << v.getZ();
	o << " )";
	return o;
}
