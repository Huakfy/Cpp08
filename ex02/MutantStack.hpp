/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:43:56 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/29 12:42:32 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <stack>
# include <deque>

template<typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		//canon
		MutantStack() {};
		MutantStack(MutantStack<T> const &src) {*this = src;};
		MutantStack<T> &operator=(MutantStack<T> const &src) {std::stack<T, Container>::operator=(src); return *this;};
		virtual ~MutantStack() {};

		typedef typename Container::iterator	iterator;
		iterator	begin()	{return this->c.begin();}
		iterator	end()	{return this->c.end();}
};

#endif