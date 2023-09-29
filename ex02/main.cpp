/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:43:46 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/29 15:31:11 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <ctime>
#include <cstdlib>
#include <iostream>

#include "MutantStack.hpp"

int main() {
	std::cout << "+----------------------42 tests----------------------+" << std::endl;
	MutantStack<int> mstack;
	std::list<int> mlist;

	mstack.push(5);
	mlist.push_back(5);

	mstack.push(17);
	mlist.push_back(17);

	std::cout << "Top:	Stack: " << mstack.top() << "	List: " << mlist.back() << std::endl;

	mstack.pop();
	mlist.pop_back();

	std::cout << "Size:	Stack: " << mstack.size() << "	List: " << mlist.size() << std::endl;

	mstack.push(3);
	mlist.push_back(3);

	mstack.push(5);
	mlist.push_back(5);

	mstack.push(737);
	mlist.push_back(737);

	mstack.push(0);
	mlist.push_back(0);

	MutantStack<int>::iterator it = mstack.begin();
	std::list<int>::iterator it2 = mlist.begin();

	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator ite2 = mlist.end();

	++it;
	++it2;

	--it;
	--it2;

	int i = 0;
	while (it != ite && it2 != ite2) {
		std::cout << "Stack[" << i <<"]: " << *it << "	List[" << i <<"]: " << *it2 << std::endl;
		++it;
		++it2;
		i++;
	}

	std::stack<int> s(mstack);
	std::cout << "+----------------------my tests----------------------+" << std::endl;
	MutantStack<int>	stck;
	std::list<int>		lst;

	std::srand((unsigned int)std::time(NULL));
	for (int i = 0; i < 50; i++) {
		int	value = std::rand();
		stck.push(value);
		lst.push_back(value);
	}

	MutantStack<int>::iterator	it3 = stck.begin();
	std::list<int>::iterator	it4 = lst.begin();

	for (int i = 0; i < 50; i++) {
		if (*it3 != *it4)
			std::cout << "Error: stck[" << i << "]:	" << *it3 << " lst[" << i << "]:	" << *it4 << std::endl;
		++it3;
		++it4;
	}

	MutantStack<int>::iterator	ite3 = stck.end();
	std::list<int>::iterator	ite4 = lst.end();
	--ite3;
	--ite4;

	for (int i = 0; i < 50; i++) {
		if (*ite3 != *ite4)
			std::cout << "Error: stck[" << 50 - i << "]:	" << *ite3 << " lst[" << 50 - i << "]:	" << *ite4 <<  std::endl;
		--ite3;
		--ite4;
	}
	return 0;
}
