/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjourno <mjourno@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 11:15:07 by mjourno           #+#    #+#             */
/*   Updated: 2023/09/27 12:13:17 by mjourno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND
# define EASYFIND

# include <algorithm>
# include <iostream>
# include <vector>

template<typename T>
int	*easyfind(T &arr, int i) {
	return std::find(arr.begin(), arr.end(), i);
}

#endif