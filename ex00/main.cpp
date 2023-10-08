/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:14:53 by mjourno           #+#    #+#             */
/*   Updated: 2023/10/09 00:05:59 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	int	arr[] = {10, 20, 5, 23 ,42, 20, 15};

	//Vector
	std::vector<int>	vect(arr, arr+7);

	std::cout << "Find 5 in vector" << std::endl;
	std::cout << "C++ function:	";
	std::vector<int>::iterator it;
	it = find(vect.begin(), vect.end(), 5);
	it != vect.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;
	std::cout << "Easyfind:	";
	std::vector<int>::iterator it2;
	it2 = easyfind(vect, 5);
	it2 != vect.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;

	std::cout << "Find 1 in vector" << std::endl;
	std::cout << "C++ function:	";
	it = find(vect.begin(), vect.end(), 1);
	it != vect.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;
	std::cout << "Easyfind:	";
	it2 = easyfind(vect, 1);
	it2 != vect.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;

	//Deque
	std::deque<int>	deq(arr, arr+7);

	std::cout << "Find 5 in deque" << std::endl;
	std::cout << "C++ function:	";
	std::deque<int>::iterator it3;
	it3 = find(deq.begin(), deq.end(), 5);
	it3 != deq.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;
	std::cout << "Easyfind:	";
	std::deque<int>::iterator it4;
	it4 = easyfind(deq, 5);
	it4 != deq.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;

	std::cout << "Find 1 in deque" << std::endl;
	std::cout << "C++ function:	";
	it3 = find(deq.begin(), deq.end(), 1);
	it3 != deq.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;
	std::cout << "Easyfind:	";
	it4 = easyfind(deq, 1);
	it4 != deq.end() ? std::cout << "Element found" << std::endl : std::cout << "Element not found" << std::endl;

	return 0;
}