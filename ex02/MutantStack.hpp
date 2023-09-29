/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:43:56 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/29 12:36:26 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK
# define MUTANTSTACK

# include <stack>
# include <deque>

template<typename T, class Container = std::deque<T>>
class MutantStack : public std::stack<T, Container> {
	public:
		//canon
		MutantStack();
		MutantStack(MutantStack<T> const &src);
		MutantStack<T> &operator=(MutantStack<T> const &src);
		virtual ~MutantStack();

		struct iterator {
			private:
				T*	m_ptr;
			public:
				iterator(T *ptr) : m_ptr(ptr) {}
				T &operator*() const {return *m_ptr;}
				T *operator->() {return m_ptr;}
				iterator& operator++() {m_ptr++; return *this;}
				iterator& operator--() {m_ptr--; return *this;}
				iterator operator++(int) {iterator tmp = *this; ++(*this); return tmp;}
				iterator operator--(int) {iterator tmp = *this; --(*this); return tmp;}
				bool operator== (const iterator& a) { return a.m_ptr == this->m_ptr; };
				bool operator!= (const iterator& a) { return a.m_ptr != this->m_ptr; };

		};
		iterator begin()	{return iterator(&this->top() - (this->size() - 1));}
		iterator end()		{return iterator(&this->top() + 1);}
};

#endif