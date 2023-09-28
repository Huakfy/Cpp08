/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:20:35 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/28 12:45:25 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(const Span &src) : size(src.size) {
	*this = src;
}

Span	&Span::operator=(const Span &src){
	if (this != &src) {
		size = src.size;
		vect = src.vect;
	}
	return *this;
}

Span::~Span() {}

Span::Span(unsigned int N) : size(N) {}

void	Span::addNumber(int i) {
	if (vect.size() == size)
		throw Span::VectorFull();
	vect.push_back(i);
}

unsigned int	Span::shortestSpan() {
	if (vect.size() <= 1)
		throw Span::VectorTooSmall();

	unsigned int	mini = std::numeric_limits<unsigned int>::max();

	std::vector<int>	temp = vect;
	std::sort(temp.begin(), temp.end());


	for (unsigned int i = 0; i < temp.size() - 1; i++) {
		mini = std::min(mini, static_cast<unsigned int>(std::max(temp[i + 1], temp[i]) - std::min(temp[i + 1], temp[i])));
	}
	return (mini);
}

unsigned int	Span::longestSpan() {
	if (vect.size() <= 1)
		throw Span::VectorTooSmall();
	return *std::max_element(vect.begin(), vect.end()) - *std::min_element(vect.begin(), vect.end());
}