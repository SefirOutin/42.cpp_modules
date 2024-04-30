#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& value);
		~Fixed();

		Fixed&	operator=(const Fixed& value);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int	_val;
		static const int _fractBits = 8;
};

#endif 
