/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 12:32:11 by tbruinem      #+#    #+#                 */
/*   Updated: 2020/10/14 11:10:05 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <stack>
#include <iterator>
#include <deque>

template<typename T>
class MutantStack: public std::stack<T>
{
		public:
			MutantStack();
			virtual ~MutantStack();
			MutantStack(const MutantStack& src);
			MutantStack &operator = (const MutantStack& src);

			typedef typename std::stack<T>::container_type::iterator iterator;

			iterator begin();
			iterator end();
};

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>()
{
	*this = src;
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator = (const MutantStack& src)
{
	if (&src != this)
		std::stack<T>::operator=(src);
	return (*this);
}

#endif
