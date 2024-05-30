/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soutin <soutin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 17:00:39 by soutin            #+#    #+#             */
/*   Updated: 2024/05/24 19:36:58 by soutin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

class Span
{
	public:
		Span();
		Span(const unsigned int n);
		Span(const Span &other);
		~Span();

		class FullStockOfNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class NotEnoughNumbersException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		Span	&operator=(const Span &other);
		
		void	addNumber(const int newNb);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
		
	private:
		std::vector<int>	_array;
		unsigned int		_n;
};




#endif