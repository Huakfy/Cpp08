/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:20:31 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/28 17:13:16 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int	main(void) {
	std::cout << "+----------------------Basic tests----------------------+" << std::endl;
	std::cout << "addNumber on size 0 Span: " << std::endl;
	try {
		Span S;
		S.addNumber(1);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nshortestSpan and longestSpan on Span(0) and Span(1):" << std::endl;
	try {
		Span S(0);
		std::cout << "shortestSpan on S(0):	" << S.shortestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Span S(1);
		S.addNumber(1);
		std::cout << "longestSpan on S(1):	" << S.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\nShortest and longest span:" << std::endl;
	Span S(4);
	S.addNumber(1);
	S.addNumber(1);
	S.addNumber(-2147483648);
	S.addNumber(2147483647);
	std::cout << "S = {1, 1, -2147483648, 2147483647}" << std::endl;
	std::cout << "S shortestSpan:	" << S.shortestSpan() << std::endl;
	std::cout << "S longestSpan:	" << S.longestSpan() << std::endl;

	std::cout << "\nCopy constructor:" << std::endl;
	Span S2(S);
	std::cout << "S2 shortestSpan:	" << S2.shortestSpan() << std::endl;
	std::cout << "S2 longestSpan:		" << S2.longestSpan() << std::endl;

	std::cout << "\nOperator= with bigger size span:" << std::endl;
	Span S3(2);
	S3.addNumber(-2147483648);
	S3.addNumber(2147483647);
	std::cout << "S3 = {-2147483648, 2147483647}" << std::endl;
	std::cout << "S3 shortestSpan:	" << S3.shortestSpan() << std::endl;
	std::cout << "S3 longestSpan:		" << S3.longestSpan() << std::endl;

	S3 = S;
	std::cout << "S3 = S" << std::endl;
	std::cout << "S3 shortestSpan:	" << S3.shortestSpan() << std::endl;
	std::cout << "S3 longestSpan:		" << S3.longestSpan() << std::endl;

	std::cout << "\naddRange:" << std::endl;
	Span S4(5);
	int	range[5] = {1,2,3,4,5};
	S4.addRange(range, 5);
	std::cout << "S4 shortestSpan:	" << S4.shortestSpan() << std::endl;
	std::cout << "S4 longestSpan:		" << S4.longestSpan() << std::endl;
	std::cout << "+--------------------Advanced tests---------------------+" << std::endl;
	Span S5(10000);
	std::srand((unsigned int)std::time(NULL));
	for (int i = 0; i < 10000; i++)
		S5.addNumber(std::rand());
	std::cout << "10 000 Numbers in a span:" << std::endl;
	std::cout << "S5 shortestSpan:	" << S5.shortestSpan() << std::endl;
	std::cout << "S5 longestSpan:		" << S5.longestSpan() << std::endl;
	Span S6(100000);
	for (int i = 0; i < 100000; i++)
		S6.addNumber(std::rand());
	std::cout << "100 000 Numbers in a span:" << std::endl;
	std::cout << "S6 shortestSpan:	" << S6.shortestSpan() << std::endl;
	std::cout << "S6 longestSpan:		" << S6.longestSpan() << std::endl;
	return 0;
}