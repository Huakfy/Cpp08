/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:15:07 by mjourno           #+#    #+#             */
/*   Updated: 2023/10/09 00:01:03 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <algorithm>
# include <iostream>
# include <vector>
# include <deque>

template<typename T>
typename T::iterator	easyfind(T &arr, int i) {
	return std::find(arr.begin(), arr.end(), i);
}

#endif