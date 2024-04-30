#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& value);
		~Fixed();


		Fixed&			operator=(const Fixed& value);

		int getRawBits() const;
		void setRawBits( int const raw );
		float toFloat() const;
		int toInt() const;

	private:
		int	_val;
		static const int _fractBits = 8;
};

std::ostream&	operator<<(std::ostream& outs, const Fixed& value);

#endif 
