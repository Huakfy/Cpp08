/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:14:53 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/27 12:11:55 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void) {
	int	arr[] = {10, 20, 5, 23 ,42, 20, 15};

	std::cout << "Find 5 in array" << std::endl;
	int *f = std::find(arr, arr+7, 5);
	f != arr+7 ? std::cout << "Element found" << std::endl : \
	std::cout << "Element not found" << std::endl;

	std::cout << "\nFind 22 in array (doesn't exist)" << std::endl;
	f = std::find(arr, arr+7, 22);
	f != arr+7 ? std::cout << "Element found" << std::endl : \
	std::cout << "Element not found" << std::endl;

	std::cout << "\nFind 15 in array (last element)" << std::endl;
	f = std::find(arr, arr+7, 15);
	f != arr+7 ? std::cout << "Element found" << std::endl : \
	std::cout << "Element not found" << std::endl;

	std::vector<int> vect (arr, arr+7);
	std::cout << "\nFind 5 in vector" << std::endl;
	std::vector<int>::iterator it;
	it = find (vect.begin(), vect.end(), 5);
	it != vect.end() ? std::cout << "Element found" << std::endl : \
	std::cout << "Element not found" << std::endl;

	return 0;
}