/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:20:37 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/28 12:38:09 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN
# define SPAN

# include <limits>
# include <vector>
# include <iostream>
# include <algorithm>

class Span {
	private:
		std::vector<int>	vect;
		unsigned int		size;
	public:
		//canon
		Span();
		Span(const Span &src);
		Span	&operator=(const Span &src);
		~Span();

		Span(unsigned int N);
		void			addNumber(int i);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class	VectorTooSmall : public std::exception {
			virtual const char *what() const throw() {
				return "Vector too small";
			}
		};

		class	VectorFull : public std::exception {
			virtual const char *what() const throw() {
				return "Vector full";
			}
		};
};

#endif