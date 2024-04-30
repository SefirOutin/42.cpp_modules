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
		Fixed(const Fixed &value);
		~Fixed();

		Fixed	&operator=(const Fixed &value);
		bool	operator<(const Fixed &value) const;
		bool	operator>(const Fixed &value) const;
		bool	operator<=(const Fixed &value) const;
		bool	operator>=(const Fixed &value) const;
		bool	operator==(const Fixed &value) const;
		bool	operator!=(const Fixed &value) const;
		Fixed	operator-(const Fixed &rval) const;
		Fixed	operator*(const Fixed &rval) const;
		Fixed	operator/(const Fixed &rval) const;
		Fixed	operator+(const Fixed &rval) const;
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		int getRawBits() const;
		void setRawBits( int const raw );
		float toFloat() const;
		int toInt() const;
		static Fixed	&min(Fixed &num, Fixed &num1);
		static const Fixed	&min(const Fixed &num, const Fixed &num1);
		static Fixed	&max(Fixed &num, Fixed &num1);
		static const Fixed	&max(const Fixed &num, const Fixed &num1);

	private:
		int	_val;
		static const int _fractBits = 8;
};

std::ostream	&operator<<(std::ostream &outs, const Fixed &value);

#endif